#include <iostream>
using namespace std;

#include "player.hpp"
#include "status.hpp"


int start_menu(void) {
    int mode;
    cout << "SimpleRPG!\n" << "[1]Start [0]Exit > ";
    cin >> mode;
    return mode;
}


int main() {
    Player* player = new Player();
    Status* status = new Status();
    status->init(1, 30, 10, 5, 0);
    string player_name;
    cout << "Please enter your name > ";
    cin >> player_name;
    player->init(player_name);
    player->setStatus(*status);
    player->setMoney(3000);
    player->show();
    delete player;


    return 0;
}