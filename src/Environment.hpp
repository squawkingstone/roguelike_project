#ifndef _ENVIRONMENT_H_
#define _ENVIRONMENT_H_

#include "libtcod.hpp"

class Environment
{
public:
  Environment(int width, int height, char* map);
  ~Environment();

  void render();
  bool isTileBlocked(int x, int y);

private:
  int _width, _height;
  char* _tiles;
};

#endif
