#include <iostream>
#include <fstream>
#include "config.cpp"

using namespace std;

void createMineFile(string minePosition[AMOUNT_OF_MINES]) {
    ofstream file("mineFile.txt");
    for(int i = 0; i < AMOUNT_OF_MINES; i++) file << minePosition[i] <<endl;  
    file.close();
}

void createMovementFile(int movements) {
    ofstream file("movementFile.txt");
    file << movements << endl;  
    file.close();
}

void createBoardAuxtFile(char boardAux[ROWS][COLUMNS]) {
    ofstream file("boardAuxFile.txt");
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++) {
            if(boardAux[i][j] == UNCOVERED_BOX) file << UNCOVERED_BOX << endl;
            else file << "None" << endl;
            
        }
    file.close();
}

int GetMovements() {
    char number[3];
    string aux = "";
    
    ifstream file("movementFile.txt");            
    file.getline(number,3);
    
    for(int i = 0; i < 3; i++) aux += number[i];
    
    return stoi(aux, nullptr, 10);
}

void SaveGame(int movements, string minePosition[AMOUNT_OF_MINES], char boardAux[ROWS][COLUMNS]) {
    createMineFile(minePosition);
    createMovementFile(movements);
    createBoardAuxtFile(boardAux);
}

void SetLastGame(int movements, char board[ROWS][COLUMNS], char boardAux[ROWS][COLUMNS], string minePosition[AMOUNT_OF_MINES]) {
    movements = GetMovements();
}