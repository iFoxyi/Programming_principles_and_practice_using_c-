#include <iostream>

int main() {
  constexpr int max = 100;
  int n;
  std::cin >> n;

  constexpr int c1 = max + 7; // Ok:c1 is 107
  constexpr int c2 =
      n +
      7; // error we don't know the value of n yet and c1 must be initialized
  return 0;
}
