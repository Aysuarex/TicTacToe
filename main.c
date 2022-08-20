/**
 * @file main.c
 * @author Ayomide Suara (aysuarex@gmail.com)
 * 
 * main - driver function for entire game
 * 
 * @date 2022-08-20
 * 
 */

#include <stdio.h>
#include <windows.h>
#include "main.h"


int main()
{
    char choice;

    START:
    system("cls");
    printf("\n"
    "     ####### ###  #####  #######    #     #####  ####### ####### #######\n"
    "        #     #  #     #    #      # #   #     #    #    #     # #       \n"
    "        #     #  #          #     #   #  #          #    #     # #       \n"
    "        #     #  #          #    #     # #          #    #     # #####   \n"
    "        #     #  #          #    ####### #          #    #     # #       \n"
    "        #     #  #     #    #    #     # #     #    #    #     # #       \n"
    "        #    ###  #####     #    #     #  #####     #    ####### ####### \n"
    );
    printf("\n ===========================\n");
    printf("\t WELCOME!\n");
    printf(" ===========================\n");
    BEGIN:
    Sleep(500);
    printf("\n============================\n");
    printf("How do you wish to play?\n");
    printf("A. Against the computer\n");
    printf("B. Against a friend\n\n");
    printf("X. Exit Game\n\t\t==> ");
    scanf("%s", &choice);

    if (choice == 'A' || choice == 'a')
        singlePlayer();
    else if (choice == 'B' || choice == 'b')
        multiPlayer();
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