#include <iostream>

int main() {
  std::cout << "can u please enter your name and age : " << std::endl;
  std::string name = "";
  double age = -1;
  std::cin >> name;
  std::cin >> age;
  std::cout << "Hello , " << name << " Your age in month's is : " << age * 12
            << std::endl;
  return 0;
}
