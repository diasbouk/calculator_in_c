#include "main.h"

// Second options Menu
void _otherOperations() {
    int num1 , num2 , option , i;
    int factorial  = 1;
            

     // system("clear");
    printf("Other options : \n\n");
    printf(" 1 > Modulo operation :  Only integers\n\n");
    printf(" 2 > Factorial Operation  : only integers \n\n");
    printf(" 3 > power Operation  :  \n\n");
    printf(" 4 > Sqaure operation  : only positive number please \n\n");
    printf("Other options will be available soon, Stay tuned :) \n\n");
    scanf("%d" , &option);
    
    switch (option)
    {
        case 1:
        _moduloOperation();
        break;
        case 2:
        _factorialOperation();
        break;
        case 3:
        _powerOperation();
        break;
        case 4:
        _squareOperation();
        break;
    default:
        break;
    
    }

}
