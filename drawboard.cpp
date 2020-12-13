#include <stdio.h>
#include "config.cpp"

using namespace std;

void PrintHeaderSeparator() {
    for(int i = 0; i <= COLUMNS; i++) printf("____");
    printf("_\n");
}

void PrintTheRowSeparator() {
    for(int i = 0; i <= COLUMNS; i++) printf("|___");
    printf("|\n");
}

void PrintHeader() {
    PrintHeaderSeparator();
    printf("|   ");
    for(int i = 0; i < COLUMNS; i++) printf("| %d ", i);
    printf("|\n");
}

char _IntToChar(int number) {
    return number + '0';
}

int InitDrawBoard(char board[ROWS][COLUMNS], char boardAux[ROWS][COLUMNS]) {
    int status = NO_ERROR;
    
    PrintHeader();
    PrintTheRowSeparator();
    
    for(int i = 0; i < ROWS; i++) {
        printf("| %d ", i);
        
        for(int j = 0; j < COLUMNS; j++) {
            char letterBox =  HIDDEN_BOX; 
            
            if(boardAux[i][j] == UNCOVERED_BOX) {
                if(board[i][j] == MINE) {
                    letterBox = MINE;
                    status = CHOSEN_MINE_ERROR;
                }
                else letterBox = 'X'; // _IntToChar(GetNearbyMines(i, j, board));
            }
            
            printf("| %c ", letterBox);
        }
        printf("|\n");
        PrintTheRowSeparator();
    }
    
    return status;
}