#include <iostream>

int square(int x) {
  int sum = x;
  int result = 0;
  for (int i = 1; i <= x;) {
    result += sum;
    ++i;
  }
  return result;
}

int main() {
  std::cout << "enter your number please : " << std::endl;
  int x = 0;
  std::cin >> x;
  int result = square(x);
  std::cout << result << std::endl;
}
