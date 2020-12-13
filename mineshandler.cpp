#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "config.cpp"

using namespace std;

int RandomRange(int first_limit, int last_limit) {
    return rand() % (last_limit + 1 - first_limit);
}

void setMineRandom(char board[ROWS][COLUMNS]) {
    for(int i = 0; i < AMOUNT_OF_MINES; i++) {
        int row = RandomRange(0, ROWS - 1);
        int column = RandomRange(0, COLUMNS - 1);
        board[row][column] = MINE;
        cout << row << " " << column << "\n";
    }
}