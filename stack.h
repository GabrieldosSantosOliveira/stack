#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>
template <typename T>
class Stack
{
private:
  std::vector<T> vector;

public:
  Stack(){};
  ~Stack(){};
  bool isEmpty()
  {
    return length() == 0;
  }

  void push(T item)
  {
    vector.push_back(item);
  }
  unsigned int length()
  {
    unsigned int size = static_cast<unsigned int>(this->vector.size()); 
    return size;
  }
  T pop()
  {
    T tmp = vector.back();
    vector.pop_back();
    return tmp;
  }
};
#endif