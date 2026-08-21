#include <iostream>
#include <vector>

int main() {
  std::vector<int> vi = {1, 5, 3, 7, 8, 6};
  for (int x : vi) {
    std::cout << x << std::endl;
  }

  return 0;
}
