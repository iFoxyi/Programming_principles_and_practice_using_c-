#include <iostream>

int main() {
  double d = 0;
  while (std::cin >> d) {
    int i = d;
    char c = i;
    std::cout << "d == " << d << std::endl;
    std::cout << "i == " << i << std::endl;
    std::cout << "c == " << c << std::endl;
    std::cout << "Char(" << c << ")\n";
  }
}
