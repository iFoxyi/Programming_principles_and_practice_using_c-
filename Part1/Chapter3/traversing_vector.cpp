#include <cinttypes>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v1 = {1, 3, 4, 7, 8, 2};
  for (int i = 0; i < v1.size(); ++i) {
    std::cout << v1[i] << std::endl;
  }

  return 0;
}
