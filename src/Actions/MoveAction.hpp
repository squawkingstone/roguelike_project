#ifndef _MOVEACTION_H_
#define _MOVEACTION_H_

#include "Action.hpp"
#include "Game.hpp"

class MoveAction : public Action
{
public:
  void perform(Actor& actor);
};

#endif
