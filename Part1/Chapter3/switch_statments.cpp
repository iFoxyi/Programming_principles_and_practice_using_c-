#include <iostream>

int main() {
  std::cout << "can u please enter the length followed by the unit (i,c) : "
            << std::endl;
  double length = 0.00;
  double cm_per_inch = 2.56;
  char unit = ' ';
  std::cin >> length;
  std::cin >> unit;

  switch (unit) {
  case 'i':
    std::cout << length << "in == " << length * cm_per_inch << "cm\n";
    break;

  case 'c':
    std::cout << length << "cm == " << length / cm_per_inch << "in\n";
    break;

  default:
    std::cout << "sorry, i don't know a unit called " << unit << "\n";
  }

  return 0;
}
