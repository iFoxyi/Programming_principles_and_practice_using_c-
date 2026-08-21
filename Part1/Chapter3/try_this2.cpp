#include <iostream>

int main() {
  std::cout
      << "can u please enter the value followed by the curency (s,p,k,y) : "
      << std::endl;
  double value = 0.00;
  char curruncy = ' ';
  std::cin >> value;
  std::cin >> curruncy;
  switch (curruncy) {
  case 'y':
    std::cout << "Your value is : " << value
              << " and in dollar is : " << value / 159.5 << std::endl;
    break;

  case 'p':
    std::cout << "Your value is : " << value
              << " and in dollar is : " << value / 0.73 << std::endl;
    break;

  case 's':
    std::cout << "Your value is : " << value
              << " and in dollar is : " << value / 0.80 << std::endl;
    break;

  case 'k':
    std::cout << "Your value is : " << value
              << "and in dollar is : " << value / 9.33 << std::endl;
    break;

  default:
    std::cout << "not recogonized currency : " << curruncy << std::endl;
  }
}
