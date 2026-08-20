#include <iostream>

int main() {
  constexpr double cm_per_inch = 2.54;
  double length = 1;
  char unit = ' ';
  std::cout << "Please enter a length followed by a unit (c or i) : \n";
  std::cin >> length >> unit;
  if (unit == 'i') {
    std::cout << length << "in == " << length * cm_per_inch << "cm\n";
  } else {
    std::cout << length << "cm == " << length / cm_per_inch << "in\n";
  }

  return 0;
}
