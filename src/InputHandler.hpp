#ifndef _INPUTHANDLER_H_
#define _INPUTHANDLER_H_

#include "libtcod.hpp"

class InputHandler
{
public:
  void pollInput();
  TCOD_keycode_t getKeyCode();

private:
  TCOD_key_t _key;
};

#endif
