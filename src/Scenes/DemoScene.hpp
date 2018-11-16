#ifndef _DEMOSCENE_H_
#define _DEMOSCENE_H_

#include "Scene.hpp"
#include "Actor.hpp"
#include "MoveAction.hpp"
#include "NoneAction.hpp"

/* So I can't find a way to call init automatically and just overload the thing. I've
 * got no real solution to this so I'm just gonna just manually call init in the
 * constructor and leave it at that
 */

class DemoScene : public Scene
{
public:
  DemoScene(const char* name) : Scene(name) { init(); }
  void init()
  {
    addActor(new Actor(40, 25, '@', TCODColor::yellow, new MoveAction()));
    addActor(new Actor(30, 20, '@', TCODColor::cyan, new NoneAction()));
  }
};

#endif
