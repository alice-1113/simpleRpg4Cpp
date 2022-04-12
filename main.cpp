#include <iostream>
#include <stdlib.h>
#include "random.hpp"


struct ACTOR{
    std::string name="";
    int level=1;
    int hp=0;
    int pw=0;
    int exp=0;
    bool isPlayer=true;
    ACTOR() {};
};

typedef struct ACTOR ACTOR;

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

void enterName(ACTOR* player, std::string name) {
    player->name = name;
}

ACTOR copyActor(const ACTOR actor, bool isPlayer) {
    ACTOR copy;
    if (isPlayer) {
        initPlayer(&copy);
        enterName(&copy, actor.name);
    } else {
        initEnemy(&copy);
        enterName(&copy, actor.name);
    }
    return copy;
}

int battle(const ACTOR source, const ACTOR target) {
    std::cout << "Player: " << source.name << "\n";
    std::cout << "Enemy: " << target.name << "\n";
    ACTOR player = copyActor(source, true);
    ACTOR enemy = copyActor(target, false);

    bool loop = true;
    while (loop) {
        std::cout << "Player's attack!\n" << player.pw << "damage!\n";
        enemy.hp -= player.pw;
        if (enemy.hp <= 0) {
            std::cout << "enemy is dead!\n";
            loop = false;
        }
        std::cout << "Enemy's attack!\n" << enemy.pw << "damage!\n";
        player.hp -= enemy.pw;
        if (player.hp <= 0) {
            std::cout << "you are dead!\n";
            loop = false;
        }
    }

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
    enterName(&player, "Alice");

    initEnemy(&enemy);
    enterName(&enemy, "Slime");

    int flag;
    std::cout << "Welcome to SimpleRPG!\n";
    std::cout << "[1] Start [0] Exit > ";
    std::cin >> flag;

    if (!flag) {
        std::cout << "Bye!\n";
        exit(0);
    }

    while (true) {
        showActor(player);

        std::cout << "Would you play battle?\n";
        std::cout << "[1] Yes [0] No > ";
        std::cin >> flag;
        if (!flag) {
            std::cout << "Bye!\n";
            break;
        }
        showActor(enemy);

        battle(player, enemy);
    }

    std::cout << "See you next time! " << std::endl;
    int input;
    std::cin >> input;
    return 0;
}