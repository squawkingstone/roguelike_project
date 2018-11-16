#include "InputHandler.hpp"
#include <iostream>

void InputHandler::pollInput()
{
  TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &_key, NULL);
}

TCOD_keycode_t InputHandler::getKeyCode()
{
  return _key.vk;
}
