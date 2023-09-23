#include "main.h"
// to performe operations with negative result
float _min(float fst, float scn) {
    return fst < scn ? fst : scn;
}

//function that generates the operations .
void _operations() {
    // system("clear");
    char operator;
    float firstNum , secondNum , result = 0;
    printf("\n Type the first number : \n");
    scanf(" \n%f" , &firstNum);
    printf("\n Type the second number : \n");
    scanf(" \n%f" , &secondNum);
    printf("\n Choose operator : \n");
    scanf("\n%c" , &operator);
    switch (operator)
    {
    case '+':
    result = firstNum + secondNum;
        printf("%.1f + %.1f = %.1f\n" ,firstNum , secondNum ,result );
        
        break;
        case '-':
        result = firstNum - secondNum;
          _min(firstNum , secondNum);
        printf("%.1f - %.1f = %.1f\n" ,firstNum , secondNum ,result );
        break;
        case '*':
        result = firstNum * secondNum;
        printf("%.1f * %.1f = %.1f\n" ,firstNum , secondNum ,result );
        break;
        case '/':
        result = firstNum / secondNum;
        // if the second number is == 0 deviding wont work
        secondNum == 0 ? printf("can't devide by 0\n") : printf("%.1f / %.1f = %.1f\n" ,firstNum , secondNum , result );

        break;
    
    default:
    printf("Try Again\n");
    }
    char operation[1000];
    snprintf(operation, sizeof(operation), "%.1f %c %.1f = %.1f", firstNum, operator, secondNum,result);
    _history(operation);
    printf("\nif you want to leave press Ctrl + C\n");
}