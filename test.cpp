 int mouseX, mouseY;
    
    texture[GaucheBas] = LoadTexture(rendu, "rapporteur/GaucheBas.png");
    texture[GaucheHaut] = LoadTexture(rendu, "rapporteur/GaucheHaut.png");
    texture[DroiteBas] = LoadTexture(rendu, "rapporteur/DroiteBas.png");
    texture[DroiteHaut] = LoadTexture(rendu, "rapporteur/DroiteHaut.png");
    
   
    SDL_RendererFlip flip = SDL_FLIP_NONE;
    SDL_Point point{ robotX,robotY };
    SDL_Event event;
    
    bool continuer = true;
    while (continuer) {

        SDL_WaitEvent(&event);
        switch (event.type) {
        case SDL_QUIT:

            continuer = false;
            exit(EXIT_SUCCESS);
            break;
        case SDL_MOUSEMOTION:

            mouseX = event.motion.x;
            mouseY = event.motion.y;

            int size = event.motion.x

            SDL_Rect rect0 = {rect0.x = robotX - size/2,
                              rect0.y = robotY, - size/2)
                              rect0.w = size,
                              rect0.h = size } ;
            
            SDL_RenderCopyEx(rendu, texture[monRapporteurEnEntier], NULL, &rect3, NULL, NULL, flip);
            
            break;

        }
        SDL_RenderPresent(rendu);
        SDL_SetRenderDrawColor(rendu, 0, 0, 0, 255);
        SDL_RenderClear(rendu);