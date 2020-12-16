#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <random>

#include "config.cpp"

using namespace std;

int RandomRange(int from, int to) {
    return from + (rand() % (to - from + 1));
}

void setMineRandom(char board[ROWS][COLUMNS], string minePosition[AMOUNT_OF_MINES]) {
    srand(time(NULL));
    for(int i = 0; i < AMOUNT_OF_MINES; i++) {
        int row = RandomRange(i, ROWS - 1);
        int column = RandomRange(i, COLUMNS - 1);
        minePosition[i] = std::to_string(row) + " " + std::to_string(column);
        board[row][column] = MINE;
    }
}

int GetNearbyMines(int row, int column, char board[ROWS][COLUMNS]) {
    int mines = 0;
    
    for(int i = -1; i <= 1; i++) {
        for(int j = -1; j <= 1; j++) {
            try {
                if((row + i >= 0 && row + i <= ROWS) && (column + j >= 0 && column + j <= COLUMNS)) 
                    if(board[row + i][column + j] == MINE) mines++;
            } catch(const std::out_of_range& e) {
                continue;
            }
        }
    }
    
    return mines;
}