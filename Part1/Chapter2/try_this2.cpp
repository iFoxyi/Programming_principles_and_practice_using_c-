#include <cmath>
#include <iostream>

int main() {
  std::cout << "Can u please enter an integer : " << std::endl;
  int num = 0;
  std::cin >> num;
  std::cout << "num == " << num << std::endl;
  std::cout << "num square == " << num * num << std::endl;
  std::cout << "num twice == " << num + num << std::endl;
  std::cout << "square root of num == " << std::sqrt(num) << std::endl;
  std::cout << "The remainder of num == " << num % 10 << std::endl;
  return 0;
}
