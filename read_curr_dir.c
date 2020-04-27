#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>

void error(const char* msg) {
    printf("%s: %s\n", msg, strerror(errno));
    exit(EXIT_FAILURE);
}

int main() {
    char *args[] = {"ls", NULL};
    int fd[2];

    if (pipe(fd) == -1)
        error("pipe failed");

    pid_t pid = fork();
    if (pid == -1)
        error("fork failed");

    if (!pid) {
        close(fd[0]);
        dup2(fd[1], fileno(stdout));

        if (execvp(args[0], args) == -1)
            error("execvp failed");
                                                                                              1,18          Top
 }
    close(fd[1]);
    dup2(fd[0], fileno(stdin));
    wait(NULL);
    char name[50];

    while (scanf("%49s", name) == 1) {
        printf(">> %s\n", name);
    }


    return EXIT_SUCCESS;
}

