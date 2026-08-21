#include <iostream>

int main() {
  int num = 1;
  char table = 1;
  for (int i = 0; i <= 122; ++i) {
    std::cout << num << '\t' << table << std::endl;
    ++num;
    ++table;
  }
  return 0;
}
