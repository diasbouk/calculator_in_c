// Simple Calculator Programm 
// takes numbers and operator as inputs and performes the operations
// every operation is saved in history , and it can be cleared .
#include "main.h"

char choice;

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
    printf("5 > Clear  console:\n\n");
    scanf("\n%d" , &option);
    
    if(option == 1) _operations();
    else if(option == 2) _otherOperations();
    else if(option == 3)  _displayHistory();
    else if(option == 4) _clearHistory();
    else if(option == 5) system("clear");
    else return 0;
    }
    
    return 0;
}