#include <iostream>

int main() {
  int value1 = 0;
  int value2 = 0;

  std::cout << "Enter two integers (or '|' to quit):\n";
  while (std::cin >> value1 >> value2) {
    std::cout << "The values are: " << value1 << " and " << value2 << "\n";

    std::cout << "Enter two integers (or '|' to quit):\n";
  }

  return 0;
}
