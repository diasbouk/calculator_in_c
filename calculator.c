// Simple Calculator Programm 
// takes numbers and operator as inputs and performes the operations
// every operation is saved in history , and it can be cleared .
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char choice;
// Function to creat history file where previous operations will be
void history(char operation[1000]) {
        FILE * hptr = fopen("history.txt" , "a+");
        fprintf(hptr, " \n%s\n", operation);
        fclose(hptr);
    }
    // clearing history function
    void clearHistory() {
        system("clear");
        remove("history.txt");
        printf("History removed succesfully.\n");
        printf("File is lost.\n");
        printf("Memory is saved.\n");
    }
    // function to display history while programm is running
    // if history is empty ,  it'll say it is .
    void displayHistory() {
        system("clear");
    FILE *hptr = fopen("history.txt", "r");
    if (hptr == NULL) {
        printf("History is empty.\n");
        return;
    }

    printf("Calculation History:\n");
    char line[1000];
    while (fgets(line, sizeof(line), hptr) != NULL) {
        printf("%s", line);
    }

    fclose(hptr);
}

//function to performe operations with negative result
float min(float fst, float scn) {
    return fst < scn ? fst : scn;
}

//function that generates the operations .
void calculator() {
    system("clear");
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
          min(firstNum , secondNum);
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
    history(operation);
    printf("\nif you want to leave press Ctrl + C\n");

}
void otherOperations() {
    int num1 , num2 , option , i;
    int factorial  = 1;
            

     system("clear");
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
        moduloFunction();
        break;
    case 2:
        factorialFunction();
        case 3:
        numberPowerFunction();
        case 4:
        squareFunction();
    default:
        break;
    
    }

}
 // operation of Modulo
void moduloFunction() {
    int num1 , num2;
    char operation[1000];
     printf("type the first and the second number :\n\n");
    scanf("%d\n%d" , &num1 , &num2);
    // Adding the operation to history
    printf("%d Modulo %d  =  %d\n" ,num1 , num2 , num1 % num2);
    snprintf(operation, sizeof(operation), "%d Modulo %d  =  %d", num1, num2,num1%num2);
    history(operation);
}
// Factorial operation
void factorialFunction() {
    system("clear");
    int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);
  if(number == 0) printf("Modulo of 0 is 1\n");
  else {
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
  char operation[1000];
  snprintf(operation, sizeof(operation), "Factorial of %d is %d ", number,fact);
    history(operation);
  }

}
// Power function
void numberPowerFunction() {
    int number , power;
    printf("Give number and Power : \n");
    scanf("%d\n%d" , &number , &power);
    printf("%d ^ %d = %d\n" , number , power , number^power);
    char operation[1000];
  snprintf(operation, sizeof(operation), "%d ^ %d = %d" , number , power , number^power);
    history(operation);
}
// Square function 
void squareFunction() {
    system("clear");
    int number;
    printf("Type the number :\n");
    scanf("%d",&number);
    if(number < 0)  printf("This number is negative !!\n");
    else {
        printf("the square of %d is %d \n" , number , sqrt(number));
        char operation[1000];
  snprintf(operation, sizeof(operation), "the square of %d is %d" , number , sqrt(number));
    history(operation);
    }
}
// The main function .

int main() {  
    system("clear");
    // A loop to keep running the programm until the user quits
    while(1) {    
    int option;
    printf("Options :\n\n");
    printf("1 > Do simple maths : + , - , * , /\n\n");
    printf("2 > Perform other operations :\n\n");
    printf("3 > see hsitory :\n\n");
    printf("4 > delete history:\n\n");
    scanf("\n%d" , &option);
    
    if(option == 1) calculator();
    else if(option == 2) otherOperations();
    else if(option == 3)  displayHistory();
    else if(option == 4) clearHistory();
    else return 0;
    }
    
    return 0;
}