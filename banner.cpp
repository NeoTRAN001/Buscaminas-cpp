#include <iostream>

using namespace std;

void Banner(int movements) {
    cout << "\n";
    cout << " ===========================================\n";
    cout << " |B u s c a m i n a s| |b y| |N e o T R A N|\n";
    cout << " ===========================================\n\n";
    cout << " | Movements: " << movements << " |\n";
}

int OptionsPlay() {
    int option;
    cout << "\n1- Seguir jugando\n2- Guardar Partida\n3- Salir\n: ";
    cin >> option;
    return option;
}

bool MenuGame() {
    char option;
    cout << "\n1- Comenzar nueva partida\n2- Última partida jugada\n:";
    cin >> option;
    return option == 1;
}