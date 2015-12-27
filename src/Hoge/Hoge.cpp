#include <iostream>
#include "Hoge.hpp"

namespace Hoge {
  Hoge::Hoge(): value(0) {}
  Hoge::Hoge(char ch): value(ch) {}
  void Hoge::huga(){ value++; }
}
/*
//usage
int main() {
  Hoge::Hoge h1(1);
  std::cout << 0 << std::endl;
  std::cout << (int)h1.value << std::endl;
  h1.huga();
  std::cout << (int)h1.value << std::endl;
  std::cout << h1.hige << std::endl;
  std::cout << 0 << std::endl;
}
*/
