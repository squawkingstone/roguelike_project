#ifndef _ACTOR_H_
#define _ACTOR_H_

#include "libtcod.hpp"
#include "Action.hpp"

class Action;

class Actor
{
public:
  Actor(int x, int y, int ch, const TCODColor &col, Action* update);
  void render() const;
  Action* getUpdate();
  void move(int dx, int dy);
  int getX() { return x; }
  int getY() { return y; }
  
protected:
  int x, y, ch;
  TCODColor col;
  Action* _update;
};

#endif
