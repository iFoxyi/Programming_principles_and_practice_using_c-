#include <iostream>

int main() {
  std::cout << "Please enter a floating-point value : " << std::endl;
  double n = 0;
  std::cin >> n;
  std::cout << "n== " << n;
  std::cout << "\nn+1 == " << 3 * n;
  std::cout << "\nthree times n == " << n * 3;
  std::cout << "\ntwice times n == " << n * 2;
  std::cout << "\nsquared n == " << n * n;
  std::cout << "\nhalf of n == " << n / 2;
  return 0;
}
