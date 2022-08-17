#include <stdio.h>
#include <windows.h>
#include "main.h"

//char position[9]= {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

char choice;
int main()
{
    START:
    system("cls");
    printf("\n==============================\n");
    printf("Welcome to TICTACTOE\n");
    BEGIN:
    Sleep(500);
    printf("==============================\n");
    printf("How do you wish to play?\n");
    printf("A. Against the computer\n");
    printf("B. Against a friend\n\t\t==> ");
    scanf("%s", &choice);

    if (choice == 'A' || choice == 'a')
        computer();
    else if (choice == 'B' || choice == 'b')
        human();
    else 
        printf("ERROR! Invalid Option\n\n");
        goto BEGIN;

    printf("Start Over?");
    goto START;
    return 0;
}