#include "TheGame.h"

void TheGame::onRender() {
 	for(int i = 0;i < CEntity::entityList.size();i++) {
    	if(!CEntity::entityList[i]) continue;
    	CEntity::entityList[i]->onRender(ecran);
	}
    SDL_Flip(ecran);
}

void TheGame::onRenderTitle(SDL_Surface* source, int x, int y) {
	CSurface::onDraw(ecran, source, x, y);
	SDL_Flip(ecran);
}

void TheGame::onRenderHome(SDL_Surface* source, int x, int y) {

	SDL_Surface* ssTitle = NULL;
	TTF_Font *policeSsTitle = NULL;
	policeSsTitle = TTF_OpenFont(TITLE_FONT, SS_TITLE_SIZE);
    SDL_Color couleur = {0, 66, 99};
    SDL_Color blanc = {255, 255, 255};

	ssTitle = TTF_RenderText_Blended(policeSsTitle, "Press enter to continue", blanc);
	CSurface::onDraw(ecran, ssTitle, 130, 500);

	onRenderTitle(source, x, y);
	TTF_CloseFont(policeSsTitle);
}

void TheGame::onClear() {
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0,0,0));
}
