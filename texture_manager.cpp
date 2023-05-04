#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "texture_manager.h"

using namespace std;

SDL_Texture* texture_manager::load_texture(const char* file_name, SDL_Renderer* &render)
{
    SDL_Surface* nsurface = IMG_Load(file_name);
    SDL_Texture* ntexture = SDL_CreateTextureFromSurface(render, nsurface);
    SDL_FreeSurface(nsurface);

    return ntexture;
}
