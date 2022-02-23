#include "scenemanager.hpp"
#include "scene.hpp"


void SceneManager::init() {
	for (int i = 0; i < 10; i++) {
		scenes[i] = NULL;
	}
}

void SceneManager::del() {
	for (int i = 0; i < 10; i++) {
		delete scenes[i];
	}
}

void SceneManager::add(Scene* scene) {
	scenes[size] = scene;
	size++;
}

Scene* SceneManager::get(Scene* scene) {
	for (int i = 0; i < size; i++) {
		if (scene->getName() == scenes[i]->getName()) { return scenes[i]; }
	}
	return NULL;
}

Scene* SceneManager::get(int index) {
	return scenes[index];
}

Scene* SceneManager::get(string name) {
	for (int i = 0; i < size; i++) {
		if (name == scenes[i]->getName()) { return scenes[i]; }
	}
	return NULL;
}