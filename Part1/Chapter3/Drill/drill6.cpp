#include <iostream>

int main() {
  std::cout << "Can u please enter an integer : " << std::endl;
  int input = 0;
  int track = 0;
  while (std::cin >> input) {
    std::cout << "Can u please enter an integer : " << std::endl;
    if (input > track) {
      std::cout << "the greatest so far . . ." << std::endl;
    } else if (input < track) {
      std::cout << "The smallest so far . . ." << std::endl;
    }
    track = 0;
    track += input;
  }

  return 0;
}
