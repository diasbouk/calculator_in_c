#include "main.h"

// Square function 
void _squareOperation() {
    // system("clear");
    double number;
    double result = sqrt(number);
    printf("Type the number :\n");
    scanf("%lf",&number);
    if(number < 0)  printf("This number is negative !!\n");
    else {
        printf("the square of %lf is %.2lf \n" , number , result);
        char operation[1000];
  snprintf(operation, sizeof(operation), "the square of %lf is %.2lf" , number , result);
    _history(operation);
    }
}