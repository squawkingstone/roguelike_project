#include "Environment.hpp"

Environment::Environment(int width, int height, char* map) :
  _width(width), _height(height)
{
  _tiles = new char[_width * _height];
  for (int i = 0; i < _width * _height; i++)
  {
    _tiles[i] = map[i];
  }
}

Environment::~Environment()
{
  delete _tiles;
}

void Environment::render()
{
  for (int y = 0; y < _height; y++)
  {
    for (int x = 0; x < _width; x++)
    {
      TCODConsole::root->setChar(x, y, _tiles[x + y * _width]);
      TCODConsole::root->setCharForeground(x, y, TCODColor::grey);
    }
  }
}

bool Environment::isTileBlocked(int x, int y)
{
  return (_tiles[x + y * _width] == '#');
}


