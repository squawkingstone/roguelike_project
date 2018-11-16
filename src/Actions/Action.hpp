#ifndef _ACTION_H_
#define _ACTION_H_

#include "libtcod.hpp"
#include "Actor.hpp"

class Actor;

class Action
{
public:
  virtual ~Action() {}
  virtual void perform(Actor& actor) = 0;
};

#endif
