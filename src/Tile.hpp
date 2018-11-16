#ifndef _TILE_H_
#define _TILE_H_

#include "libtcod.hpp"

class Tile
{
public:
  Tile(int x, int y, char character, const TCODColor& color, bool blocking)
    : x(x), y(y), character(character), color(color), blocking(blocking) { }
  bool isBlocking() { return blocking; }
private:
  int x, y;
  char character;
  TCODColor color;
  bool blocking;
};

#endif
