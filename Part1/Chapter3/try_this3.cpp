#include <iostream>

int main() {
  char i = 1;
  int b = 1;
  while (i <= 122) {
    std::cout << i << '\t' << b << std::endl;
    ++i;
    ++b;
  }
  return 0;
}
