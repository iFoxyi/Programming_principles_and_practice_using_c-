#include <iostream>

int main() {
  int i = 0;
  while (i < 100) {
    std::cout << i << '\t' << i * i << '\n';
    ++i;
  }
}
