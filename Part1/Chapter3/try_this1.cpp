#include <iostream>

int main() {
  std::cout << "Can u plz enter your value followed by the "
               "currency('y','k','p') : \n";
  double value = 0.00;
  char currency = ' ';
  std::cin >> value >> currency;

  if (currency == 'y') {
    std::cout << value << "yen == " << value / 159.05 << "in dollar"
              << std::endl;
  } else if (currency == 'k') {
    std::cout << value << "Korner == " << value / 9.33 << " in dollar"
              << std::endl;
  } else {
    std::cout << value << "pound == " << value / 0.73 << " in dollar "
              << std::endl;
  }

  return 0;
}
