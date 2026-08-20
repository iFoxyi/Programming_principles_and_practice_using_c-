#include <iostream>

int main() {
  int legnth = 90;
  int widhth = 40;
  int perimeter = (legnth + widhth) * 2; // add then multiply
  // int perimeter = legnth*2 + widhth*2;  same but without the parentheses
  std::cout << perimeter << "\n";
  return 0;
}
