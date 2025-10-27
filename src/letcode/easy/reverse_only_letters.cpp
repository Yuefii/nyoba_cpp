#include <cctype>
#include <iostream>
#include <string>

std::string reverse_only_strings(std::string s) {
  int left = 0;
  int right = s.size() - 1;

  while (left < right) {
    if (!std::isalpha(s[left])) {
      left++;
    } else if (!std::isalpha(s[right])) {
      right--;
    } else {
      std::swap(s[left], s[right]);
      left++;
      right--;
    }
  }

  return s;
};

int main() {
  std::cout << reverse_only_strings("ab-cd") << std::endl;
  std::cout << reverse_only_strings("a-bC-dEf-ghIj") << std::endl;
  std::cout << reverse_only_strings("Test1ng-Leet=code-Q!") << std::endl;

  return 0;
}
