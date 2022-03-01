#include "startscene.hpp"
#include "scene.hpp"

void StartScene::draw() {
    int mode;
    cout << "SimpleRPG!\n" << "[1]Start [0]Exit > ";
    cin >> mode;
    setNextSceneId(mode);
}