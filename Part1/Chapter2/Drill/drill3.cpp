#include <iostream>
#include <string>

int main() {
  std::cout << "hi how are u doing, what's your name : " << std::endl;
  std::string Name = "";
  std::cin >> Name;
  std::cout << "Nice to meet u" << std::endl;
  std::string friend_name = "";
  std::cout << "What's your friend name : " << std::endl;
  std::cin >> friend_name;
  std::cout << "Have u seen " << friend_name << "lately" << std::endl;

  return 0;
}
