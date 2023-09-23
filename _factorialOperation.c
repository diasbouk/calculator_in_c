#include "main.h"

// Factorial operation
void _factorialOperation() {
    system("clear");
    int number , i , count = 1;    
 printf("Enter a number: ");    
  scanf("%d",&number);
  if(number == 0) printf("Modulo of 0 is 1\n");
  else {
    for(i=1;i<=number;i++){    
      count = count * i;    
  }    
  printf("Factorial of %d is: %d\n", number , count);    
  char operation[1000];
  snprintf(operation, sizeof(operation), "Factorial of %d is %d ", number , count);
    _history(operation);
  }

}