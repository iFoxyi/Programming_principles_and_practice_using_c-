#include <iostream>

int main() {
  std::cout << "Please enter two names \n" << std::endl;
  std::string name1;
  std::string name2;
  std::cin >> name1 >> name2;

  if (name1 == name2) {
    std::cout << "That's the same name twice . . .";
  }
  if (name1 < name2) {
    std::cout << name1 << "is alphabetically before " << name2;
  }
  if (name1 > name2) {
    std::cout << name1 << " is alphabetically after " << name2;
  }

  return 0;
}
