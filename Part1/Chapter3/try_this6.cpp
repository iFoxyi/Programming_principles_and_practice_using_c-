#include <iostream>
#include <string> // It's good practice to explicitly include string
#include <vector>

int main() {
  // Fix 1: Standard initializer list for a vector
  std::vector<std::string> bad_words = {"fuck", "bitch", "dog", "terror"};

  // This loop grabs one word at a time from the terminal
  for (std::string input; std::cin >> input;) {
    // Fix 2: Remove the inner loop and check 'input' directly
    // Fix 3: Use '==' for comparison, not '='
    if (input == bad_words[0] || input == bad_words[1] ||
        input == bad_words[2] || input == bad_words[3]) {
      std::cout << "Bleep" << std::endl;
    } else {
      std::cout << "Your word is : " << input << std::endl;
    }
  }

  return 0;
}
