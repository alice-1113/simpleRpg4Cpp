#include <iostream>
#include "source.hpp"

using namespace std;


int start_menu(void) {
    int mode;
    cout << "SimpleRPG!\n" 
         << "[1]Start [0]Exit > ";
    cin >> mode;
    return mode;
}

int main() {
    int mainloop;
    int flag;
    cout << "Hello World!\n";
    mainloop = start_menu();
    hello();
    cin >> flag;
    return 0;
}