#include "Scene.hpp"
#include <iostream>

// One kind of annoying thing is that I can't call init() in here even though I've
// overridden it in the subclass. I might just have to declare it virtual but not
// pure virtual and see what happens

Scene::Scene(const char* name) : _name(name)
{
  _actors = new TCODList<Actor*>();
};

Scene::~Scene()
{
  for (Actor** itr = _actors->begin(); itr != _actors->end(); itr++)
  {
    delete (*itr);
  }
  delete _actors;
};

void Scene::update()
{
  for (Actor** itr = _actors->begin(); itr != _actors->end(); itr++)
  {
    (*itr)->getUpdate()->perform(**itr);
  }
};

void Scene::render() const
{
  for (Actor** itr = _actors->begin(); itr != _actors->end(); itr++)
  {
    (*itr)->render();
  }
}

void Scene::addActor(Actor* actor) { _actors->push(actor); }
