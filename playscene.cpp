#include "playscene.hpp"


void PlayScene::draw() {
    int mode;
    cout << "[1]Explore "
        << "[2]Status "
        << "[0]Exit > ";
    cin >> mode;
    setNextSceneId(mode);
}