#include <iostream>
using namespace std;


typedef struct {
    string name;
} PLAYER;


int main() {
    PLAYER player = { "Alice" };
    cin >> player.name;
    cout << player.name << "\n";
    return 0;
}