#include "main.h"
// Function to creat history file where previous operations will be
void _history(char operation[1000]) {
        FILE * hptr = fopen("history.txt" , "a+");
        fprintf(hptr, " \n%s\n", operation);
        fclose(hptr);
    }