#include <stdio.h>
#include <windows.h>
#include "main.h"

char choice;
int main()
{
    START:
    system("cls");
    printf("\n============================\n");
    printf("Welcome to TICTACTOE\n");
    printf("============================\n");
    BEGIN:
    Sleep(500);
    printf("\n============================\n");
    printf("How do you wish to play?\n");
    printf("A. Against the computer\n");
    printf("B. Against a friend\n\n");
    printf("X. Exit Game\n\t\t==> ");
    scanf("%s", &choice);

    if (choice == 'A' || choice == 'a')
        computer();
    else if (choice == 'B' || choice == 'b')
        human();
    else if (choice == 'X' || choice == 'x')
    {
        printf("\nBYE! Come Back Soon\n");
        Sleep(2000);
        exit(0);
    }
    else 
        printf("ERROR! Invalid Option\n\n");
        goto BEGIN;

    printf("Start Over?");
    goto START;
    return 0;
}