#include "tile.hpp"

struct Floor{
	int x = 80;
	int y = 80;
	Tile map[81][81];
	std::string name;	
	Floor(std::string name){
		this->name = name;
	};
};

void displayFeatures(Floor& floor){
	SDL_RenderClear(globalRenderer);
	SDL_Rect dstrect;
	SDL_Rect srcrect;
	dstrect.w = 48;
	dstrect.h = 48;
	srcrect.w = 48;
	srcrect.h = 48;
	for(int i = 0; i < 27; i++){
		for(int j = 0; j < 15; j++){
			dstrect.x = i * 48;
			dstrect.y = j * 48;
			srcrect.x = floor.map[i][j].type->graphic->x;
			srcrect.y = floor.map[i][j].type->graphic->y;
			if(SDL_RenderCopy(globalRenderer, floor.map[i][j].type->graphic->texture, &srcrect, &dstrect))
				printf("SDL Error in drawing routine: %s\n", SDL_GetError());
		}
	}
	SDL_RenderPresent(globalRenderer);
}

#include "floorgen.hpp"