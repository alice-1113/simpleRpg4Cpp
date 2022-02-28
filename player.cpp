#include <iostream>
using namespace std;
#include "status.hpp"
#include "player.hpp"


void Player::init(string name, Status *status, int money) {
    this->name = name;
    setStatus(status);
    setMoney(money);
}

void Player::setStatus(Status *status) {
    this->status = status;
}

void Player::setMoney(int money) {
    this->money = money;
}

void Player::show(void) {
    cout << "Name: " << name << "\n"
        << "Money:" << money << "\n"
        << "Lv : " << status->getLevel() << "\n"
        << "HP : " << status->getHitPoint() << "\n"
        << "STR: " << status->getStrength() << "\n"
        << "DEF: " << status->getDefence() << "\n"
        << "EXP: " << status->getExp() << "\n";
}
