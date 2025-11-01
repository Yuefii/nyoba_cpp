#include <cctype>
#include <iostream>
#include <string>

bool detect_capital_use(std::string word) {
  bool all_upper = true;
  bool all_lower = true;

  for (char c : word) {
    if (!isupper(c))
      all_upper = false;
    if (!islower(c))
      all_lower = false;
  }

  if (all_upper || all_lower) {
    return true;
  }

  if (isupper(word[0])) {
    for (int i = 1; i < word.size(); i++) {
      if (!islower(word[i])) {
        return false;
      }
    }
    return true;
  }

  return false;
};

int main() {
  std::cout << detect_capital_use("USA") << std::endl;
  std::cout << detect_capital_use("FlaG") << std::endl;
}
