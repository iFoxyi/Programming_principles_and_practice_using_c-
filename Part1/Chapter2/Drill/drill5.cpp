#include <iostream>

int main() {
  std::cout << "what is your age ??" << std::endl;
  int age = 0;
  std::cin >> age;
  if (age < 12) {
    std::cout << "Next year u will be " << age + 1 << std::endl;
  }
  if (age == 17) {
    std::cout << "Next year you will be able to vote" << std::endl;
  }
  if (age > 70) {
    std::cout << "are u retired ?? " << std::endl;
  }
  return 0;
}
