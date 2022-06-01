#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void drawBoard();
int checkWin();

char position[9]= {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int turn;

int main()
{
    char mark;
    int choice;
    int player;
    int Player_1, Player_2;
    unsigned int turn = 1;

    system("cls");
    printf("Welcome to TICTACTOE!\n");
    Sleep(800);
    drawBoard();

 Sleep(1000);
    Mark: //Reference Point
    
    printf("-----------------------------------------------\n");
    printf("Player_1, Enter a choice (X or O): \n\t");
    scanf("%s", &mark);
    
    if (mark== 'X' || mark== 'x')
        printf("Player_1 = X\nPlayer_2 = O\n");
        //player1= 'X';
        
    else if (mark == 'O' || mark== 'o')
        printf("Player_1 = O\nPlayer_2 = X\n");
    else {
        printf("ERROR! Enter invalid Choice\n\n");
        goto Mark;
    }

    Next: //Reference Point
    //turn = 0;
    turn++;
    turn= (turn % 2);

    if(turn == 0)
        player = 2;
    else
        player = 1;

    //drawBoard();
}*/
