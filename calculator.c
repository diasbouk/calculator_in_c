// Simple Calculator Programm 
// takes numbers and operator as inputs and performes the operations
// every operation is saved in history , and it can be cleared .
#include <stdio.h>
#include <stdlib.h>

char choice;
// Function to creat history file where previous operations will be
void history(char operation[1000]) {
        FILE * hptr = fopen("history.txt" , "a+");
        fprintf(hptr, " \n%s\n", operation);
        fclose(hptr);
    }
    // clearing history function
    void clearHistory() {
        remove("history.txt");
        printf("History removed succesfully.\n");
        printf("File is lost.\n");
        printf("Memory is saved.\n");
    }
    // function to display history while programm is running
    // if history is empty ,  it'll say it is .
    void displayHistory() {
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
// The main function .

int main() {  
    // A loop to keep running the programm until the user quits
    while(1) {    
    int option;
    printf("Options :\n\n");
    printf("1 > Do math :\n\n");
    printf("2 > see hsitory :\n\n");
    printf("3 > delete history:\n\n");
    scanf("\n%d" , &option);
    
    if(option == 1) calculator();
    else if(option == 2)  displayHistory();
    else if(option == 3) clearHistory();
    else return 0;
    }
    
    return 0;
}