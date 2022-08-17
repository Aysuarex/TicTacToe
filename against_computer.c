#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <sys/time.h>
//#include <ctype.h>
#include "main.h"

char board[3][3];
char choice;
char player;
char comp;
int x, y;

void computer()
{
    char winner;

    system("cls");
    printf("===============================\n"
    "Welcome to Single player Mode!\n");
    Sleep(800);
    resetBoard();

    drawBoard();
    Sleep(1000);
    
    printf("-----------------------------------------------\n");
    printf("Select X or O:\n\t\t==> ");
    scanf("%s", &choice);
    
    do
    {
        if (choice == 'x' || choice == 'X')
    {
        //choice = toupper(choice);
        player = 'X';
        comp = 'O';
        printf("\nPlayer = X\nComputer = O\n");
        break;
    }
    else if (choice == 'o' || choice == 'O')
    {
        player = 'O';
        comp = 'X';
        printf("\nPlayer = O\nComputer = X\n");
        break;
    }
    else
    {
        printf("\nERROR! Invalid Input\n");
    }

    } while ((choice != 'X') && (choice != '0'));
    

    if (checkFreeSpaces() > 0) //if there are free spaces on the board
    {
        playerMove();
    }
    else //if there are no free spaces on the board
    {
        printWinner(' ');
    }
    winner = checkWinner();

    if (checkFreeSpaces() > 0) //if there are free spaces on the board
    {
        computerMove();
    }
    else //if there are no free spaces on the board
    {
        printWinner(' ');
    }
    winner = checkWinner();

    printWinner(winner);

    printf("Do you Wish to play again?: ");
    printf("\n\n");
    return;
}

void printBoard()
{
    printf("\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t   %c  |   %c  |  %c  \n", board[0][0], board[0][1], board[0][2]);
    printf("\t\t\t\t\t\t______|______|______\n");
    printf("\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t   %c  |   %c  |  %c  \n", board[1][0], board[1][1], board[1][2]);
    printf("\t\t\t\t\t\t______|______|______\n");
    printf("\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t   %c  |   %c  |  %c  \n", board[2][0], board[2][1], board[2][2]);
    printf("\t\t\t\t\t\t      |      |      \n");

    return;
}

int resetBoard() //makes all the spaces on the board empty
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            board[i][j] = ' ';
        }
    }
    return 0;
}

int checkFreeSpaces()
{
    int freespaces = 9;

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            if (board[i][j] != ' ')
            {
                freespaces--;
            }
    return freespaces;
}

void playerMove()
{
    do
    {
        printf("Where do you wish to play?(1-9): ");
        scanf("%s", &choice);

        if (choice = '1')
        {
            x = 0;
            y = 0;
        }
        else if (choice = '2')
        {
            x = 0;
            y = 1;
        }
        else if (choice = '3')
        {
            x = 0;
            y = 2;
        }
        else if (choice = '4')
        {
            x = 1;
            y = 0;
        }
        else if (choice = '5')
        {
            x = 1;
            y = 1;
        }
        else if (choice = '6')
        {
            x = 1;
            y = 2;
        }
        else if (choice = '7')
        {
            x = 2;
            y = 0;
        }
        else if (choice = '8')
        {
            x = 2;
            y = 1;
        }
        else if (choice = '9')
        {
            x = 2;
            y = 2;
        }
        else
        {
            printf("ERROR! Invalid Option\n");
        }

    if (board[x][y] != ' ')
    {
        printf("ERROR! Occupied");
    }
    else
    {
        board[x][y] = player; 
        //if the position is free, put the player's token there
        break;
    }

    } while (board[x][y] == ' '); 
    /*keep asking player to input another choice
    if the postion they pick is not empty*/

    return;
}

void computerMove()
{    
    do
    {
        srand(time(NULL));
        x= rand() % 3;
        y= rand() % 3;

        if (board[x][y] == ' ')
        {
            board[x][y] = comp; 
            //if the postion is free, put the computer's token there
            break;
        }
        else
        {
            continue;
        }
    } while (board[x][y] != ' '); 
    /*if that postion is occupued, keep generating a random position on
    the board until a free space is found*/

    return;
}

char checkWinner()
{
    //check rows
    for(int i=0; i<3; i++)
        if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]))
        {
            return board[i][0]; 
        }

    //check columns
    for(int j=0; j<3; j++)
        if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]))
        {
            return board[0][j];
        }
    
    //check diagonals
    if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
    {
        return board[0][0];
    }
    if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))
    {
        return board[0][2];
    }
}

void printWinner()
{
    if (checkWinner() == player)
    {
        printf("YOU WIN!");
    }
    else if (checkWinner() == comp)
    {
        printf("YOU LOSE!");
    }
    else
    {
        printf("Draw!\n");
    }
    return;
}