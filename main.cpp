#include <iostream>
using namespace std;


typedef struct {
    int level;
    int hp;
    int pw;
    int exp;
} STATUS;

typedef struct {
    string name;
    STATUS status;
} PLAYER;

typedef struct {
    string name;
    STATUS status;
} ENEMY;


void showPlayer(PLAYER player) {
    cout << "Name: " << player.name << "\n";
    printf_s("Lv  : %3d\n", player.status.level);
    printf_s("HP  : %3d\n", player.status.hp);
    printf_s("STR : %3d\n", player.status.pw);
    printf_s("EXP : %3d\n", player.status.exp);
}

void showEnemy(ENEMY enemy) {
    cout << "Name: " << enemy.name << "\n";
    printf_s("HP  : %3d\n", enemy.status.hp);
    printf_s("STR : %3d\n", enemy.status.pw);
}

void enterName(PLAYER *player) {
    cout << "Please enter your name > ";
    cin >> player->name;
}


int main() {
    STATUS playerStatus = { 1, 32, 12, 0 };
    PLAYER player = { "Alice", playerStatus };
    STATUS enemyStatus = { 1, 24, 8, 4 };
    ENEMY enemy = { "Slime", enemyStatus };

    showPlayer(player);
    showEnemy(enemy);
    return 0;
}