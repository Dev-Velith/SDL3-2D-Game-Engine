#ifndef GAME_H
#define GAME_H

#include <SDL3/SDL.h>

class Game {
public:	
	Game();
	~Game();

	bool init(const char* title, int width, int height);
	void run();
	void cleanup();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	bool isRunning;
};

#endif GAME_H
