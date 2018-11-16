#ifndef _GAME_H_
#define _GAME_H_

#include "libtcod.hpp"
#include "Scene.hpp"
#include "InputHandler.hpp"

class Game 
{
public:
  /* Game functions */
  static void init();
  static void addScene(Scene* scene);
  static void loadScene(const char* name);
  static void destroy();

  /* Scene function wrappers */
  static void update();
  static void render();

  /* InputHandler function wrappers */
  static void pollInput();
  static TCOD_keycode_t getKeyCode();
  
private:
  static Scene* _scene;
  static InputHandler* _input;
};

#endif
