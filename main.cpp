#include <iostream>
using namespace std;

#include "player.hpp"


int start_menu(void) {
    int mode;
    cout << "SimpleRPG!\n"
        << "[1]Start [0]Exit > ";
    cin >> mode;
    return mode;
}


int main() {
    Player* player = new Player();
    player->init("Alice");
    player->show();
    delete player;
    return 0;
}