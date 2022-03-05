#include <iostream>
using namespace std;


typedef struct {
    string name;
    int level;
    int hp;
    int pw;
    int exp;
    bool isPlayer;
} ACTOR;



void showActor(ACTOR actor) {
    cout << "Name: " << actor.name << "\n";
    printf_s("Lv  : %3d\n", actor.level);
    printf_s("HP  : %3d\n", actor.hp);
    if (actor.isPlayer) {
        printf_s("STR : %3d\n", actor.pw);
        printf_s("EXP : %3d\n", actor.exp);
    }
    cout << endl;
}

void enterName(ACTOR *player) {
    cout << "Please enter your name > ";
    cin >> player->name;
}


int main() {
    ACTOR player = { "Alice", 1, 32, 12, 0, true };
    ACTOR enemy = { "Slime", 1, 24, 8, 4, false };

    int flag;
    cout << "Welcome to SimpleRPG!\n";
    cout << "[1] Start [0] Exit > ";
    cin >> flag;

    if (!flag) {
        cout << "Bye!\n";
        exit(0);
    }

    showActor(player);
    
    showActor(enemy);
    
    return 0;
}