#include "main.h"
// function to display history while programm is running
    // if history is empty ,  it'll say it is .
    void _displayHistory() {
       // system("clear"); 
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