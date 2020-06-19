#ifndef _GAME_H
#definde _GAME_H

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class Game{
	private:
		
		int width, height;
		int initWindow();
		int loadAssets();
		int gameLoop();
		int update();
	public:
		int run();

}
