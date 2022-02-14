#include <iostream>
using namespace std;


class Player {
    private:
        string name;
    public:
        void init(string name);
        void show(void);
};


void Player::init(string name) {
    this->name = name;
}


void Player::show(void) {
    cout << name << "\n";
}
