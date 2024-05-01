#include <iostream>

#include "stack.h"

int main()
{
  Stack<int> items;
  items.push(9);
  std::cout << items.isEmpty() << std::endl;
  std::cout << items.length() << std::endl;
  std::cout << items.pop() << std::endl;
  std::cout << items.length() << std::endl;
  std::cout << items.isEmpty() << std::endl;
  return 0;
}