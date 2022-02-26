#include <iostream>
#include <map>
using namespace std;

#include "player.hpp"
#include "status.hpp"
#include "scene.hpp"


int start_menu(void) {
    int mode;
    cout << "SimpleRPG!\n" << "[1]Start [0]Exit > ";
    cin >> mode;
    return mode;
}

int play_menu(void) {
    int mode;
    cout << "[1]Explore "
        << "[2]Status "
        << "[0]Exit > ";
    cin >> mode;
    return mode;
}

int main() {
    int gameloop;
    int scene_id = 0;
    int mainloop;
    map<string, Scene*> scenes;
    string sceneNames[3] = {
        "main", "2nd", "3rd"
    };
    for (int i = 0; i < 3; i++) {
        scenes[sceneNames[i]] = new Scene();
        scenes[sceneNames[i]]->setName(sceneNames[i]);
        cout << scenes[sceneNames[i]]->getName() << "\n";
        delete scenes[sceneNames[i]];
    }

    string player_name;
    Player* player = new Player();
    Status* status = new Status();
    status->init(1, 30, 10, 5, 0);
    mainloop = start_menu();
    if (mainloop == 0) { exit(0); }
    cout << "Please enter your name > ";
    cin >> player_name;
    player->init(player_name, status, 3000);
    player->show();
    gameloop = 1;
    while (gameloop) {
        gameloop = play_menu();
        // Rewrite State pattern, mainloop, gameloop, ... and so on. 
        switch (gameloop) {
        case 0:
            cout << "Bye\n";
            break;
        case 1:
            cout << "OK\n";
            break;
        case 2:
            player->show();
            break;
        default:
            break;
        }
    }

    delete status;
    delete player;
    return 0;
}