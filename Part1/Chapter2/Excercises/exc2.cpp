#include <iostream>

int main() {
  std::cout << "can u please enter your unit in kilometers : " << std::endl;
  double user = 0;
  std::cin >> user;
  std::cout << "Your unit in miles is : " << user * 1.609 << std::endl;
  return 0;
}
