#include <stdio.h>
#include <stdlib.h>
char choice;

/*
#define bool char
#define true y
#define false n
*/

void min(float fst, float scn)
{ 
    return fst < scn ? scn : fst; 
    }


void calculator() {
    char operator;
    float firstNum , secondNum;
    printf("\n Type the first number : \n");
    scanf("%f" , &firstNum);
    printf("\n Type the second number : \n");
    scanf("%f" , &secondNum);
    printf("\n Choose operator : \n");
    scanf(" %c" , &operator);
    switch (operator)
    {
    case '+':
        printf("%.1f + %.1f = %.1f\n" ,firstNum , secondNum , firstNum + secondNum );
        break;
        case '-':
          min(firstNum , secondNum);
        printf("%.1f - %.1f = %.1f\n" ,firstNum , secondNum , firstNum - secondNum );
        break;
        case '*':
        printf("%.1f * %.1f = %.1f\n" ,firstNum , secondNum , firstNum * secondNum );
        break;
        case '/':
        secondNum == 0 ? printf("can't devide by 0\n") : printf("%.1f / %.1f = %.1f\n" ,firstNum , secondNum , firstNum / secondNum );

        break;
    
    default:
    printf("Try Again\n");
    }
    printf("if you want to leave press Ctrl + C\n");

    calculator();
}

int main() {
    while (1)
    {
     calculator();
     
    }
       
    return 0;
}