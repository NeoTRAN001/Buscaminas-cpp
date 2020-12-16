#include <stdio.h>
#include <iostream>
#include "config.cpp"

using namespace std;

void SetLastGame(int movements, char board[ROWS][COLUMNS], char boardAux[ROWS][COLUMNS], string minePosition[AMOUNT_OF_MINES]);
void SaveGame(int movements, string minePosition[AMOUNT_OF_MINES], char boardAux[ROWS][COLUMNS]);
void setMineRandom(char board[ROWS][COLUMNS], string minePosition[AMOUNT_OF_MINES]);
int InitDrawBoard(char board[ROWS][COLUMNS], char boardAux[ROWS][COLUMNS]);
void ClearTerminal(void);
void Banner(int plays);
int OptionsPlay();
bool MenuGame();

int main(int argc, char **argv)
{
    char board[ROWS][COLUMNS];
    char boardAux[ROWS][COLUMNS];
    string minePosition[AMOUNT_OF_MINES];
    
    int row, column;
    int movements = 0;
    int inGame = NO_ERROR;
    
    if(MenuGame()) setMineRandom(board, minePosition);
    else SetLastGame(movements, board, boardAux, minePosition);
    
    setMineRandom(board, minePosition);
    
    while(inGame == NO_ERROR) {
        // ClearTerminal();
        Banner(movements);
        
        InitDrawBoard(board, boardAux);
        
        switch(OptionsPlay()) {
            case 1:
                cout << "\nRow: ";    cin >> row;
                cout << "\nColumn: "; cin >> column;
                
                if(!(boardAux[row][column] == UNCOVERED_BOX)) movements++;
                
                boardAux[row][column] = UNCOVERED_BOX;
                
                ClearTerminal();
                inGame = InitDrawBoard(board, boardAux);
                if(movements == ((ROWS*COLUMNS) - AMOUNT_OF_MINES)) inGame = YOU_WIN;
            break;
            
            case 2:
                inGame = SAVE_GAME;
                SaveGame(movements, minePosition, boardAux);
            break;
            
            case 3:
                inGame = EXIT_GAME;
            break;
            
        }
    }
    
    switch(inGame) {
        case YOU_WIN: cout << "| Has ganado!! |\n"; break;
        case SAVE_GAME: cout << "| Juego guardado |\n"; break;
        case EXIT_GAME: cout << "| Hasta luego |\n"; break;
    }
	return 0;
}
