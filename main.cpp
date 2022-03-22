﻿#include <iostream>
using namespace std;
#include <stdlib.h>
#include "random.hpp"


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
    cout << random->randint(0, 10) << endl;
    cout << random->random() << endl;
    delete random;

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

    cout << "exit; simpleRPG!" << endl ;
    return 0;
}