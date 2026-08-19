#include <iostream>

int main() {
  std::cout << "Please enter your first name (followed by enter) : "
            << std::endl;
  std::string first_name;
  std::cin >> first_name;
  std::cout << "Hello, " << first_name << "!\n";
  return 0;
}
