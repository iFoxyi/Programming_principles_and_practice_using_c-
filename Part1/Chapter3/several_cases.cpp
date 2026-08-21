#include <iostream>

int main() {
  std::cout << "can u please enter a digit from 1 to 10" << std::endl;
  char a = ' ';
  std::cin >> a;

  switch (a) {
  case '0':
  case '2':
  case '4':
  case '6':
  case '8':
    std::cout << "is even" << std::endl;
    break;

  case '1':
  case '3':
  case '5':
  case '7':
  case '9':
    std::cout << "is odd" << std::endl;
    break;

  default:
    std::cout << "is not a digit" << std::endl;
    break;
  }
  return 0;
}
