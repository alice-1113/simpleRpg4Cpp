#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>




class Random {
public:
    void init_random(void);
    int random(int min, int max);
};

void Random::init_random(void) {
    srand((unsigned int)time(NULL));
}

int Random::random(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}


typedef struct {
    string name;
    int level;
    int hp;
    int pw;
    int exp;
    bool isPlayer;
} ACTOR;



void showActor(const ACTOR actor) {
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

int battle(const ACTOR player, const ACTOR enemy) {
    cout << "Player: " << player.name << "\n";
    cout << "Enemy: " << enemy.name << "\n";

    cout << "Finish!" << "\n";

    cout << "Winner: " << player.name << "\n";

    return 0;
}


int main() {
    Random *random = new Random();
    random->init_random();
    cout << random->random(0, 10) << endl;

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
    
    battle(player, enemy);
    delete random;
    return 0;
}