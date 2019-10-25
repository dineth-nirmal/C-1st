#include <stdio.h>
#include <stdlib.h>

double calc(double n1, double n2,char o){
        double result;
                if(o == '+'){
                        result = n1 + n2;
                }else if(o == '-'){
                        result = n1 - n2;
                }else if(o == '*'){
                        result = n1 * n2;
                }else if(o == '/'){
                        result = n1 / n2;
                }
                return result;

}
int main(){
    double n1, n2;
    char o;

    printf("first number: ");
    scanf("%lf", &n1);

    printf("operator: ");
    scanf(" %c", &o);
        if (!(o == '+' || o == '-' || o == '*' || o == '/')){
                printf("invalid operator found.you should be using'+', '-', '*' or '/'.\n ");
        }else{
                printf("second number: ");
                scanf("%lf", &n2);
                printf("result: %f\n", calc(n1, n2, o));
        }
    return 0;
}
