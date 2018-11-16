#include "Game.hpp"

/* Static variable declaration */
Scene* Game::_scene;
InputHandler* Game::_input;

/* Initialize game systems and libtcod console */
void Game::init()
{
  _input = new InputHandler();
};

void Game::addScene(Scene* scene)
{
  _scene = scene;
};

void Game::loadScene(const char* name)
{
  // find the scene with that name, make it active to start rendering and updating it
};

/* Clean up game systems */
void Game::destroy()
{
  delete _scene;
  delete _input;
};

void Game::update() { _scene->update(); }
void Game::render() { _scene->render(); }

void Game::pollInput() { _input->pollInput(); }
TCOD_keycode_t Game::getKeyCode() { return _input->getKeyCode(); }
  
