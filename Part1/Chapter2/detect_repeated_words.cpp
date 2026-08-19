#include <iostream>

int main() {
  std::string previous;
  std::string current;
  while (std::cin >> current) {
    if (previous == current) {
      std::cout << "repeated word detected " << std::endl;
    }
    previous = current;
  }

  return 0;
}
