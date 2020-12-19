#include <iostream>

using namespace std;

void ClearTerminal(void);

void Banner(int movements) {
    cout << "\n";
    cout << " ===========================================\n";
    cout << " |B u s c a m i n a s| |b y| |N e o T R A N|\n";
    cout << " ===========================================\n\n";
    cout << " | Movements: " << movements << " |\n";
}

int OptionsPlay() {
    int option;
    cout << "\n\n1- Seguir jugando\n2- Guardar Partida\n3- Salir\n: ";
    cin >> option;
    return option;
}

bool MenuGame() {
    char option;
    ClearTerminal();
    cout << "    __    _  _______  _______    _______  ______    _______  __    _ \n";
    cout << "   |  |  | ||       ||       |  |       ||    _ |  |   _   ||  |  | |\n";
    cout << "   |   |_| ||    ___||   _   |  |_     _||   | ||  |  |_|  ||   |_| |\n";
    cout << "   |       ||   |___ |  | |  |    |   |  |   |_||_ |       ||       |\n";
    cout << "   |  _    ||    ___||  |_|  |    |   |  |    __  ||       ||  _    |\n";
    cout << "   | | |   ||   |___ |       |    |   |  |   |  | ||   _   || | |   |\n";
    cout << "   |_|  |__||_______||_______|    |___|  |___|  |_||__| |__||_|  |__|\n";
    cout << "   __________________________________________________________________";
    cout << "\n     | 1- Comenzar nueva partida |   | 2- Última partida jugada  |\n";
    cout << "   __________________________________________________________________\nR:";
    cin >> option;
    return option == '1';
}