#include <iostream>

int main() {
  std::cout << "Please enter expression (we can handle + and - and * and /) : "
            << std::endl;
  int lval = 0;
  int rval = 0;
  int res = 0;
  std::cin >> lval;
  if (!std::cin) {
    std::cout << "no first operand " << std::endl;
  }
  for (char op; std::cin >> op;) {
    if (op != 'x') {
      std::cin >> rval;
    }
    if (!std::cin) {
      std::cout << "no second operand" << std::endl;
    }
    switch (op) {
    case '+':
      lval += rval;
      break;

    case '-':
      lval -= rval;
      break;

    case '*':
      lval *= rval;
      break;

    case '/':
      lval / rval;
      break;

    default:
      std::cout << "Result : " << lval << std::endl;
      return 0;
    }
  }

  std::cout << "bad expression"

      return 0;
}
