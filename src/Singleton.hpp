#ifndef _SINGLETON_H_
#define _SINGLETON_H_

template <typename T>
class Singleton
{
protected:
  static T& instance()
  {
    static T* instance = new T();
    return *instance;
  }
};

#endif
