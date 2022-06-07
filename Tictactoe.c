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
        mark = 'X';
        printf("Player_1 = X\nPlayer_2 = O\n");
        //player1= 'X';
        
    else if (mark == 'O' || mark== 'o')
        mark = 'O';
        printf("Player_1 = O\nPlayer_2 = X\n");
    else {
        printf("ERROR! Enter invalid Choice\n\n");
        goto Mark;
    }

    Next: //Reference Point
    turn++;
    turn= (turn % 2);
    if(turn == 1)
        player = 1;
    else
        player = 2;


    //AY, Remember to create another function that changes the mark to uppercase if it's presently in the lowercase. That is, 'x' becomes 'X'

    Position: //Reference Point
    drawBoard();
    Sleep(800);
    printf("\nPlayer_%d's turn. Enter a position to play (1-9): \n\t", player);
    scanf("%d", &choice);
    if(choice==1 && position[0]=='1')
        position[0] = mark;
    else if(choice ==2 && position[1] =='2')
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
        turn--;
        if (checkWin() == 0)
            printf("Draw");
            goto 
        if (checkWin() == 1)
            printf("Winner");
        if (checkWin() == -1)
            //printf("Continue")
            goto Position;
    }
    
    //drawBoard();
    goto Next;
    return 0;
}

void drawBoard()
{
    printf("\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t   %c  |   %c  |  %c  \n", position[0], position[1], position[2]);
    printf("\t\t\t\t\t\t______|______|______\n");
    printf("\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t   %c  |   %c  |  %c  \n", position[3], position[4], position[5]);
    printf("\t\t\t\t\t\t______|______|______\n");
    printf("\t\t\t\t\t\t      |      |      \n");
    printf("\t\t\t\t\t\t   %c  |   %c  |  %c  \n", position[6], position[7], position[8]);
    printf("\t\t\t\t\t\t      |      |      \n");

    return;
}

int checkWin()
{
    if (position[0] == position[1] == position [2])
        return 1;
    else if (position[3] == position[4] == position[5])
        return 1;
    else if (position[6] == position[7] == position[8])
        return 1;
    else if (position[0] == position[4] == position[8])
        return 1;
    else if (position[0] == position[3] == position[6])
        return 1;
    else if (position[1] == position[4] == position[7])
        return 1;
    else if (position[2] == position[5] == position[8])
        return 1;
    else if (position[2] == position[4] == position[6])
        return 1;
    else if (position[0] != '1' && position[1] != '2' && position[2] != '3' && position[3] != '4' && position[4] != '5' && position[5] != '6' && position[6] != '7' && position[7] != '8' && position[8] != '9')
        return 0;
    else 
        return -1;
}













