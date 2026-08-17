#include "Game.h"
#include <iostream>

int main() {
	Game game;

	if (!game.init("SDL3 2D Game Engine", 800, 600)) {
		return 1;
	}

	game.run();
	return 0;
}