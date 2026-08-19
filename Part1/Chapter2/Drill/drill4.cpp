#include <iostream>

int main() {
  std::cout << "What's your age ?? " << std::endl;
  int age = 0;
  std::cin >> age;
  std::cout << "i heared you just had a birthday and you are " << age
            << "years old" << std::endl;
  std::string simple_error("you are kidding");
  if (age <= 0) {
    std::cout << simple_error << std::endl;
  }
  if (age >= 110) {
    std::cout << simple_error << std::endl;
  }
  return 0;
}
