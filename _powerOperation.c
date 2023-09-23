#include "main.h"

// Power function
void _powerOperation() {
    float number ;
    int power;
    printf("Give number and Power : \n");
    scanf("%f\n%d" , &number , &power);
    printf("%f ^ %d = %.2f\n" , number , power , pow(number,power));
    char operation[1000];
  snprintf(operation, sizeof(operation), "%f ^ %d = %.2f" , number , power , pow(number,power));
    _history(operation);
}