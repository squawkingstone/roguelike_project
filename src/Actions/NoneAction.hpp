#ifndef _NONEACTION_H_
#define _NONEACTION_H_

#include "Action.hpp"

class NoneAction : public Action
{
public:
  void perform(Actor& actor) {}
};

#endif
