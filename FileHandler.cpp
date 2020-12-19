#include <iostream>
#include <fstream>
#include "config.cpp"
#include <string.h>

using namespace std;

void createMineFile(string minePosition[AMOUNT_OF_MINES]) {
    ofstream file("mineFile.txt");
    for(int i = 0; i < AMOUNT_OF_MINES; i++) {
        file << minePosition[i] << endl;
    }
    file.close();
}

void getMineFile(string minePosition[AMOUNT_OF_MINES]) {
    ifstream file;
    string content;
    
    file.open("mineFile.txt", ios::in);
    if(file.fail()) exit(1);
    
    for(int i = 0; i < AMOUNT_OF_MINES; i++) {
        getline(file, content);
        minePosition[i] = content;
    }
    
    file.close();
}

void createMovementFile(int movements) {
    ofstream file("movementFile.txt");
    file << movements << endl;  
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

void createBoardAuxtFile(char boardAux[ROWS][COLUMNS]) {
    ofstream file("boardAuxFile.txt");
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++) {
            if(boardAux[i][j] == UNCOVERED_BOX) file << UNCOVERED_BOX << endl;
            else file << "None" << endl;
            
        }
    file.close();
}

void getBoardAuxFile(char boardAux[ROWS][COLUMNS]) {
    ifstream file;
    string content;
    
    file.open("boardAuxFile.txt", ios::in);
    if(file.fail()) exit(1);
    
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLUMNS; j++) {
            getline(file, content);
            if(content != "None") boardAux[i][j] = UNCOVERED_BOX;
        }
    }
    
    file.close();
}

void setMinesInBoard(string minePosition[AMOUNT_OF_MINES], char board[ROWS][COLUMNS]) {
    for(int i = 0; i < AMOUNT_OF_MINES; i++) {
        int row = minePosition[i][0] - '0';
        int column = minePosition[i][1] - '0';
        board[row][column] = MINE;
    }
}

void SaveGame(int movements, string minePosition[AMOUNT_OF_MINES], char boardAux[ROWS][COLUMNS]) {
    createMineFile(minePosition);
    createMovementFile(movements);
    createBoardAuxtFile(boardAux);
}

int SetLastGame(char board[ROWS][COLUMNS], char boardAux[ROWS][COLUMNS], string minePosition[AMOUNT_OF_MINES]) {
    getMineFile(minePosition);
    setMinesInBoard(minePosition, board);
    getBoardAuxFile(boardAux);
    
    return GetMovements();
}