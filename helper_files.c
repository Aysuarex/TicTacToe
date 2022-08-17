#include <stdio.h>
#include "main.h"

char position[9]= {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

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
    if (position[0] == position[1] && position[1] == position [2])
        return 1;
    else if (position[3] == position[4] && position[4] == position[5])
        return 1;
    else if (position[6] == position[7] && position[7] == position[8])
        return 1;
    else if (position[0] == position[4] && position[4]== position[8])
        return 1;
    else if (position[0] == position[3] && position[3]== position[6])
        return 1;
    else if (position[1] == position[4] && position[4] == position[7])
        return 1;
    else if (position[2] == position[5] && position[5]== position[8])
        return 1;
    else if (position[2] == position[4] && position[4]== position[6])
        return 1;
    else if (position[0] != '1' && position[1] != '2' && position[2] != '3' && position[3] != '4' && position[4] != '5' && position[5] != '6' && position[6] != '7' && position[7] != '8' && position[8] != '9')
        return 0;
    else 
        return -1;
}
