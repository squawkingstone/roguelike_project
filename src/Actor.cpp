#include "Actor.hpp"
#include <iostream>

Actor::Actor(int x, int y, int ch, const TCODColor &col, Action* update) :
  x(x), y(y), ch(ch), col(col), _update(update) {}

void Actor::render() const
{
  TCODConsole::root->setChar(x,y,ch);
  TCODConsole::root->setCharForeground(x,y,col);
}

Action* Actor::getUpdate()
{
  return _update;
}

void Actor::move(int dx, int dy)
{
  x += dx; y += dy;
}
