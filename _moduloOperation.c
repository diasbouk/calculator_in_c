#include "main.h"
// operation of Modulo
void _moduloOperation() {
    int num1 , num2;
    char operation[1000];
     printf("type the first and the second number :\n\n");
    scanf("%d\n%d" , &num1 , &num2);
    // Adding the operation to history
    printf("%d Modulo %d  =  %d\n" ,num1 , num2 , num1 % num2);
    snprintf(operation, sizeof(operation), "%d Modulo %d  =  %d", num1, num2,num1%num2);
    _history(operation);
}