#include <iostream>
using namespace std;


class Scene {
	private:
		string name;
	public:
		string getName();
};

string Scene::getName() {
	return name;
}