#include <iostream>
#include <vector>

int main() {
  int input1 = 0, input2 = 0, input3 = 0;
  std::string unit = " ";
  int sum = 0;
  std::vector<int> data_set;
  std::cout << "can u please enter 3 integers followd by a unit (m) : "
            << std::endl;
  int input1_conv = 0;
  int input2_conv = 0;
  int input3_conv = 0;

  while (std::cin >> input1 >> input2 >> input3 >> unit) {
    sum += input1 + input2 + input3;
    if (input1 > input2 && input2 > input3) {
      std::cout << input1 << " is the largest " << std::endl;
      std::cout << input3 << " is the smallest " << std::endl;
    } else if (input2 > input3 && input3 > input1) {
      std::cout << input2 << " is the largest " << std::endl;
      std::cout << input1 << "is the smallest " << std::endl;
    } else {
      std::cout << input3 << " is the largest " << std::endl;
      std::cout << input2 << " is the smallest " << std::endl;
    }

    sum += input1 + input2 + input3;
    std::cout << "the sum of the values are : " << sum << std::endl;

    input1_conv = input1 * 100;
    input2_conv = input2 * 100;
    input3_conv = input3 * 100;
    data_set.push_back(input1_conv);
    data_set.push_back(input2_conv);
    data_set.push_back(input3_conv);
    for (int print : data_set) {
      std::cout << print << std::endl;
    }
    sum = 0;
  }
  return 0;
}
