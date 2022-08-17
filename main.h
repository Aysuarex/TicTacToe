#ifndef __MAIN_H__
#define __MAIN_H__


//prototypes for multiplayer mode
void human();
void drawBoard();
int checkWin();

//prototypes for single player mode
void computer();
void computerMove();
void playerMove();
int resetBoard();
void printBoard();
char checkWinner();
void printWinner();
int checkFreeSpaces();


#endif