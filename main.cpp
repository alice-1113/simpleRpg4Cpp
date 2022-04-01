#include <iostream>
#include <stdlib.h>
#include "random.hpp"


typedef struct {
    std::string name;
    int level;
    int hp;
    int pw;
    int exp;
    bool isPlayer;
} ACTOR;


void initPlayer(ACTOR* actor) {
    actor->level = 1;
    actor->hp = 32;
    actor->pw = 12;
    actor->exp = 0;
    actor->isPlayer = true;
}

void initEnemy(ACTOR* actor) {
    actor->level = 1;
    actor->hp = 24;
    actor->pw = 8;
    actor->exp = 4;
    actor->isPlayer = false;
}


void showActor(const ACTOR actor) {
    std::cout << "Name: " << actor.name << "\n";
    printf_s("Lv  : %3d\n", actor.level);
    printf_s("HP  : %3d\n", actor.hp);
    if (actor.isPlayer) {
        printf_s("STR : %3d\n", actor.pw);
        printf_s("EXP : %3d\n", actor.exp);
    }
    std::cout << std::endl;
}

void enterName(ACTOR *player) {
    std::cout << "Please enter your name > ";
    std::cin >> player->name;
}

void eneterName(ACTOR* player, std::string name) {
    player->name = name;
}

int battle(const ACTOR player, const ACTOR enemy) {
    std::cout << "Player: " << player.name << "\n";
    std::cout << "Enemy: " << enemy.name << "\n";

    std::cout << "Finish!" << "\n";

    std::cout << "Winner: " << player.name << "\n";

    return 0;
}


int main() {
    Random *random = new Random();

    std::cout << random->randint(0, 10) << std::endl;
    std::cout << random->random() << std::endl;
    delete random;

    ACTOR player;
    ACTOR enemy;
    initPlayer(&player);
    eneterName(&player, "Alice");

    initEnemy(&enemy);

    int flag;
    std::cout << "Welcome to SimpleRPG!\n";
    std::cout << "[1] Start [0] Exit > ";
    std::cin >> flag;

    if (!flag) {
        std::cout << "Bye!\n";
        exit(0);
    }

    showActor(player);
    showActor(enemy);
    
    battle(player, enemy);

    std::cout << "exit; simpleRPG!" << std::endl;

    std::cout << "GoodBye!" << std::endl;
    return 0;
}