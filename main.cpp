#include <iostream>

using namespace std;


int start_menu(void) {
    int mode;
    cout << "SimpleRPG!\n" 
         << "[1]Start [0]Exit > ";
    cin >> mode;
    return mode;
}

class Player {
    private:
        string name;
    public: 
        void init(string name);
        void show();
};

void Player::init(string name) {
    this->name = name;
}


void Player::show() {
    cout << name << "\n";
}

int main() {
    int mainloop;
    Player *player = new Player();
    player->init("Alice");
    mainloop = start_menu();
    player->show();
    delete player;
    return 0;
}