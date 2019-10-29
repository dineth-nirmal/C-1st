#include <stdio.h>

int main(){
        int lucky_number = 4;
        int guess_count = 1;
        int guess;
        while(guess_count <= 3){
                printf("guess %d: ", guess_count);
                scanf("%d", &guess);
                if(guess == lucky_number){
                        printf("you found it, lucky number is %d\n", guess);
                        break;
                }else if(guess_count == 3){
                        printf("!!GAME OVER!!\nTry again.\n");
                        break;
                }else{
                        printf("%d is not the lucky number. try again.\n", guess);
                        guess_count++;
                }
        }
        return 0;
}
22 lines yanked                                               1,1           All
