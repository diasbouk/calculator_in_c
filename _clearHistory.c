#include "main.h"
// clearing history function
    void clearHistory() {
        system("clear");
        remove("history.txt");
        printf("History removed succesfully.\n");
        printf("File is lost.\n");
        printf("Memory is saved.\n");
    }