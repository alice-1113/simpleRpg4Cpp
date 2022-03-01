#pragma once
#include "scene.hpp"

class NullScene : public Scene {
	private:
		bool isNull = { true };
	public:
		void draw();
		bool getIsNull();
};

