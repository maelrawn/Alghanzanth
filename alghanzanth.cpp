#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "sprite.hpp"
#include "item.hpp"
#include "tile.hpp"
#include "dungeon.hpp"
#include "entity.hpp"
#include "graphics.hpp"
#include "render.hpp"
unsigned int previousTime;

int main(){
	printf("got to main");
	SDL_SetMainReady();
	previousTime = SDL_GetTicks();
	srand(time(NULL));
	if(!initSDL()){
		printf("SDL has encountered an error and must close. SDL Error: %s\n", SDL_GetError());
		return -1;
	}
	SDL_SetHint(SDL_HINT_RENDER_DRIVER, "opengl");
	creaturesFrame1->initialize();
	creaturesFrame2->initialize();
	portraits->initialize();
	items->initialize();
	tiles->initialize();
	printf("initialized");
	TileType* wallType = new TileType(wallSprite, true, true);
	TileType* grassType = new TileType(grassSprite, false, false);
	Floor floor = Floor("default");
	for(int i = 0; i <= 80; i++){
		for(int j = 0; j <= 80; j++){
			switch(rand()%2){
				case 0:
					floor.map[i][j] = Tile(i, j, wallType);
				break;
				case 1:
					floor.map[i][j] = Tile(i, j, grassType);
				break;
			}
		}
	}			
	printf("generated map");
	bool quit = false;
	SDL_Event event;
	printf("entered main loop");
	while(!quit){
		if((SDL_GetTicks() - previousTime) >= 17){
			previousTime = SDL_GetTicks();
			while(SDL_PollEvent(&event) != 0){
				if(event.type == SDL_KEYDOWN){
					switch(event.key.keysym.sym){		
						case SDLK_UP:
							if(camera.y > 0)
								camera.y -= 1;
							break;
						case SDLK_RIGHT:
							if(camera.x < 100)
								camera.x += 1;
							break;
						case SDLK_DOWN:
							if(camera.y < 100)
								camera.y += 1;
							break;
						case SDLK_LEFT:
							if(camera.x > 0)
								camera.x -= 1;
							break;
						case SDLK_ESCAPE:
							quit = true;
							break;
					}
				}
			}
		displayFeatures(floor);
		SDL_UpdateWindowSurface(gameWindow);
		SDL_Delay(17 - (SDL_GetTicks() - previousTime));
		}
	}
	close();
}