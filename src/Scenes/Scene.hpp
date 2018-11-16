#ifndef _SCENE_H_
#define _SCENE_H_

#include "libtcod.hpp"
#include "Actor.hpp"

class Scene
{
public:
  Scene(const char* name);
  virtual ~Scene();
  
  void update();
  void render() const;

  // const char* getName() { return _name; }
  // TCODList<Actor*>* getActors() { return _actors; }
  
protected:
  virtual void init() = 0;
  void addActor(Actor* actor);

private:
  const char* _name;
  TCODList<Actor*>* _actors;
  
};

#endif
