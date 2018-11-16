#include "MoveAction.hpp"

void MoveAction::perform(Actor& actor)
{
  int dx = 0, dy = 0;
  switch (Game::getKeyCode())
  {
  case TCODK_UP: dy = -1; break;
  case TCODK_DOWN: dy = 1; break;
  case TCODK_LEFT: dx = -1; break;
  case TCODK_RIGHT: dx = 1; break;
  default: break;
  }
  actor.move(dx, dy);
}

