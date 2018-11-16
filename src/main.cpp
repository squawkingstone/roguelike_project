#include <iostream>

#include "libtcod.hpp"
#include "Game.hpp"
#include "InputHandler.hpp"
#include "DemoScene.hpp"

int main(int argc, char** argv)
{
  TCODConsole::setCustomFont("res/terminal16x16_gs_ro.png", TCOD_FONT_LAYOUT_ASCII_INROW);
  TCODConsole::initRoot(80, 50, "Demo!", false);

  Game::init();
  Game::addScene(new DemoScene("Demo Scene"));
  
  while ( !TCODConsole::isWindowClosed() )
  {
    TCODConsole::root->clear();
    Game::pollInput();
    if (Game::getKeyCode() == TCODK_ESCAPE) break;
    Game::update();
    Game::render();
    TCODConsole::flush();
  }

  std::cout << "Closing..." << std::endl;
  Game::destroy();
  
  return 0;
}
