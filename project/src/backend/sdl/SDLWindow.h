#ifndef LIME_SDL_WINDOW_H
#define LIME_SDL_WINDOW_H


#ifdef GCW0
#include <SDL2/SDL.h>
#else
#include <SDL.h>
#endif
#include <graphics/ImageBuffer.h>
#include <ui/Window.h>


namespace lime {
	
	
	class SDLWindow : public Window {
		
		public:
			
			SDLWindow (Application* application, int width, int height, int flags, const char* title);
			~SDLWindow ();
			
			virtual void Close ();
			virtual void Move (int x, int y);
			virtual void Resize (int width, int height);
			virtual void SetIcon (ImageBuffer *imageBuffer);
			
			SDL_Window* sdlWindow;
		
	};
	
	
}


#endif
