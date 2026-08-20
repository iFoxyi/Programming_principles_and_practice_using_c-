#include <iostream>

int main() {
  std::cout << "can u please enter two floating-point values  : " << std::endl;
  double val1 = 0;
  double val2 = 0;
  std::cin >> val1;
  std::cin >> val2;
  std::cout << "The Sum : " << val1 + val2 << std::endl;
  std::cout << "The difference : " << val1 - val2 << std::endl;
  std::cout << "The Ratio : " << val1 / val2 << std::endl;
  std::cout << "The product : " << val1 * val2 << std::endl;

  if (val1 > val2) {
    std::cout << val1 << " is larger than " << val2 << std::endl;
  }

  if (val2 > val1) {
    std::cout << val2 << " is larger than " << val1 << std::endl;
  }

  return 0;
}
