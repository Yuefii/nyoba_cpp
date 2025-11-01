#include <iostream>
#include <string>

bool repeated_substring_pattern(std::string s) {
  std::string doubled = s + s;
  std::string removed = doubled.substr(1, doubled.size() - 2);

  return removed.find(s) != std::string::npos;
};

int main(){
  std::cout << repeated_substring_pattern("abab") << std::endl;
  std::cout << repeated_substring_pattern("aba") << std::endl;
  std::cout << repeated_substring_pattern("abcabcabcabc") << std::endl;
}
