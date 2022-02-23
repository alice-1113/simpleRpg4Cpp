#pragma once
#include "scene.hpp"

class SceneManager {
private:
	Scene* scenes[10];
	int size = {0};
public:
	void init();
	void del();
	void add(Scene* scene);
	Scene* get(Scene* scene);
	Scene* get(int index);
	Scene* get(string name);

};
