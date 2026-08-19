#include <iostream>

int main() {
  int age = -1;
  std::cin >> age;

  std::string name;
  std::cin >> name;

  int a2 = age + 2;
  std::string n2 = name + "Jr.";

  int a3 = age - 2;
  std::string n3 =
      name - "Jr."; // you can't subtract a string by using the "-" operator in
                    // not defined to use it with strings (Compiler error)
  return 0;
}
