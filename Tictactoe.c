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

    Position: //Reference Point
    drawBoard();
    Sleep(800);

    printf("\nPlayer_%d's turn. Enter a position to play (1-9): \n\t", player);
    scanf("%d", &choice);
    if(choice==1 && position[0]=='1')
        position[0] = mark;
    else if(choice==2 && position[1]=='2')
        position[1] = mark;
    else if(choice ==3 && position[2] == '3')
        position[2] = mark;
    else if (choice ==4 && position[3] == '4')
        position[3] = mark;
    else if (choice ==5 && position[4] == '5')
        position[4] = mark;
    else if (choice ==6 && position[5] =='6')
        position[5] = mark;
    else if (choice ==7 && position[6] =='7')
        position[6] = mark;
    else if (choice ==8 && position[7] == '8')
        position[7] = mark;
    else if (choice ==9 && position[8] =='9') 
        position[8] = mark;
    else {
        printf("ERROR! Invalid Option\n");
        --turn;
        goto Position;
    }
    //drawBoard();
    goto Next;
    return 0;
}

void drawBoard()
{
    printf("\t\t\t\t\t\t      |      |      \n");
