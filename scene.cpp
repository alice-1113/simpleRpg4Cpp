#include <iostream>
#include "scene.hpp"
using namespace std;


string Scene::getName() {
	return name;
}

void Scene::setName(string newname) {
	name = newname;
}