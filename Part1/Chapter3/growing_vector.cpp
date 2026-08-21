#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> vs;
  vs.push_back("Foxy");
  vs.push_back("Jiro");
  vs.push_back("Bom Bom");

  for (std::string print : vs) {
    std::cout << print << std::endl;
  }

  return 0;
}
