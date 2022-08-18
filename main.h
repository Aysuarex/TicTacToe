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
void resetBoard();
void printBoard();
char checkWinner();
void printWinner(char);
int checkFreeSpaces();


#endif