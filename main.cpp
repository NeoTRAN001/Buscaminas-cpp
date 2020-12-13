#include <stdio.h>
#include <iostream>
#include "config.cpp"

using namespace std;

int InitDrawBoard(char board[ROWS][COLUMNS], char boardAux[ROWS][COLUMNS]);
void ClearTerminal(void);

int main(int argc, char **argv)
{
    char board[ROWS][COLUMNS];
    char boardAux[ROWS][COLUMNS];
    
    int row, column;
    int inGame = NO_ERROR;
    
    board[0][2] = MINE;
    board[0][3] = MINE;
    board[1][5] = MINE;    
    
    while(inGame == NO_ERROR) {
        ClearTerminal();
        InitDrawBoard(board, boardAux);
        
        cout << "Row: ";    cin >> row;
        cout << "Column: "; cin >> column;
        
        boardAux[row][column] = UNCOVERED_BOX;
        ClearTerminal();
        inGame = InitDrawBoard(board, boardAux);
    }
	return 0;
}
