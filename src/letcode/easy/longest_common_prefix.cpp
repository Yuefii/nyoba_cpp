#include <iostream>
#include <vector>
#include <string>

std::string longest_common_prefix(std::vector<std::string>& strs) {
  if (strs.empty()) return "";
  
  std::string prefix = strs[0];

  for (int i = 1; i < strs.size(); i++) {
    while (strs[i].find(prefix) != 0) {
      prefix = prefix.substr(0, prefix.size() - 1);
      if (prefix.empty()) return "";
    }
  }

  return prefix;
}

int main() {
  std::vector<std::string> case_1 = {"flower", "flow", "flight"};
  std::vector<std::string> case_2 = {"dog", "racecar", "car"};

  std::cout << longest_common_prefix(case_1) << std::endl;
  std::cout << longest_common_prefix(case_2) << std::endl;

  return 0;
}
