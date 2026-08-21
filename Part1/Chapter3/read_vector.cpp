#include <iostream>
#include <vector>

int main() {
  std::vector<double> temps;
  for (double temp; std::cin >> temp;) {
    temps.push_back(temp);
    for (double print : temps) {
      if (print > 30) {
        std::cout << "the tempriture is hot . . ." << std::endl;
      } else {
        std::cout << "the tempriture is colde . . ." << std::endl;
      }
    }
  }

  return 0;
}
