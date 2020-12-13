#include <stdio.h>
#include <iostream>
#include "config.cpp"

using namespace std;

int InitDrawBoard(char board[ROWS][COLUMNS], char boardAux[ROWS][COLUMNS]);
void setMineRandom(char board[ROWS][COLUMNS]);
void ClearTerminal(void);
void Banner(void);

int main(int argc, char **argv)
{
    char board[ROWS][COLUMNS];
    char boardAux[ROWS][COLUMNS];
    
    int row, column;
    int inGame = NO_ERROR;
    
    setMineRandom(board);   
    
    while(inGame == NO_ERROR) {
        ClearTerminal();
        Banner();
        InitDrawBoard(board, boardAux);
        
        cout << "\nRow: ";    cin >> row;
        cout << "\nColumn: "; cin >> column;
        
        boardAux[row][column] = UNCOVERED_BOX;
        ClearTerminal();
        inGame = InitDrawBoard(board, boardAux);
    }
	return 0;
}
