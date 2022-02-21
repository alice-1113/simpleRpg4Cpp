#pragma once
#ifndef _SCENE_HPP_
#define _SCENE_HPP_

#include <iostream>
using namespace std;


class Scene {
	private:
		string name;
		Scene *next;
	public:
		string getName();
		void setName(string newname);
};


#endif // !_SCENE_HPP_
