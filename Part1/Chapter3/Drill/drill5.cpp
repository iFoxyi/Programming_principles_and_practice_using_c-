#include <iostream>

int main() {
  double value1 = 0.00;
  double value2 = 0.00;

  std::cout << "Enter two integers (or '|' to quit):\n";
  while (std::cin >> value1 >> value2) {
    std::cout << "The values are: " << value1 << " and " << value2 << "\n";
    if (value1 > value2) {
      std::cout << value1 << " is larger than " << value2 << std::endl;
    } else if (value2 == value1) {
      std::cout << "Values are equall . . . " << std::endl;
    } else if (value1 + 0.01 == value2 || value2 + 0.01 == value1) {
      std::cout << "The numbers are almost equall . . . :> " << std::endl;
    }

    else {
      std::cout << value2 << " is larger than " << value1 << std::endl;
    }
    std::cout << "Enter two integers (or '|' to quit):\n";
  }
  return 0;
}
