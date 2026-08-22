#include <iostream>
#include <string>

int main() {
  std::cout << "can u please enter the value followed by a unit (in,m,ft): "
            << std::endl;
  double value = 0.00;
  std::string unit = " ";

  while (std::cin >> value >> unit) {
    if (unit == "in") {
      std::cout << value << "in" << " == " << value * 2.54 << "cm" << std::endl;
    } else if (unit == "m") {
      std::cout << value << "m" << " == " << value * 100 << "cm" << std::endl;
    } else if (unit == "ft") {
      std::cout << value << "ft" << "== " << value * 12 << "in" << std::endl;
    } else {
      std::cout << "unrecogonized unit check please your unit : " << unit
                << std::endl;
    }
  }
  return 0;
}
