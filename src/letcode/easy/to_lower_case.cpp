#include <cctype>
#include <iostream>
#include <string>

std::string to_lower_case(std::string s) {
  for (int i = 0; i < s.size(); i++) {
    s[i] = tolower(s[i]);
  }
  return s;
};

int main() {
  std::cout << to_lower_case("Hello") << std::endl;
  std::cout << to_lower_case("here") << std::endl;
  std::cout << to_lower_case("LOVELY") << std::endl;
}
