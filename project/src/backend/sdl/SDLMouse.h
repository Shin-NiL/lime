#ifndef LIME_SDL_MOUSE_H
#define LIME_SDL_MOUSE_H


#ifdef GCW0
#include <SDL2/SDL.h>
#else
#include <SDL.h>
#endif
#include <ui/Mouse.h>
#include <ui/MouseCursor.h>


namespace lime {
	
	
	class SDLMouse {
		
		public:
			
			static SDL_Cursor* arrowCursor;
			static SDL_Cursor* crosshairCursor;
			static SDL_Cursor* moveCursor;
			static SDL_Cursor* pointerCursor;
			static SDL_Cursor* resizeNESWCursor;
			static SDL_Cursor* resizeNSCursor;
			static SDL_Cursor* resizeNWSECursor;
			static SDL_Cursor* resizeWECursor;
			static SDL_Cursor* textCursor;
			static SDL_Cursor* waitCursor;
			static SDL_Cursor* waitArrowCursor;
		
	};
	
	
}


#endif
