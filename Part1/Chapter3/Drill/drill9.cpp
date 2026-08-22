#include <iostream>

int main() {
  int input1 = 0, input2 = 0, input3 = 0;
  std::string unit = " ";
  int sum = 0;
  std::cout << "can u please enter 3 integers followd by a unit (m) : "
            << std::endl;
  while (std::cin >> input1 >> input2 >> input3) {
    sum += input1 + input2 + input3;
    if (input1 > input2 && input2 > input3) {
      std::cout << input1 << " is the largest " << std::endl;
      std::cout << input3 << " is the smallest " << std::endl;
    } else if (input2 > input3 && input3 > input1) {
      std::cout << input2 << " is the largest " << std::endl;
      std::cout << input1 << "is the smallest " << std::endl;
    } else {
      std::cout << input3 << " is the largest " << std::endl;
      std::cout << input2 << " is the smallest " << std::endl;
    }
    std::cout << "The sum of the valus is : " << sum << std::endl;
    sum = 0;
  }
  return 0;
}
