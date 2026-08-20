#include <iostream>

int main() {
  constexpr double pi = 3.14159; // u must give a value for the constexpr and it
                                 // is getting procced at compile time
  pi = 7;                // error you  can't change the value
  double c = 2 * pi * r; // OK: we just read pi,we don't try to change it
  return 0;
}
