#include <iostream>
#include <string>

int length_of_longest_sub_string(std::string s) {
  int max_len = 0;
  std::string temp = "";

  for (int i = 0; i < s.size(); i++) {
    size_t pos = temp.find(s[i]);

    if (pos != std::string::npos) {
      temp = temp.substr(pos + 1);
    }

    temp += s[i];

    if (temp.size() > max_len) {
      max_len = temp.size();
    }
  }

  return max_len;
}

int main() {
  std::string case_1, case_2, case_3;

  case_1 = "abcabcbb";
  case_2 = "bbbbb";
  case_3 = "pwwkew";

  std::cout << length_of_longest_sub_string(case_1) << std::endl;
  std::cout << length_of_longest_sub_string(case_2) << std::endl;
  std::cout << length_of_longest_sub_string(case_3) << std::endl;

  return 0;
}
