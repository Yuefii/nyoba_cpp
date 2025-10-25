#include <algorithm>
#include <iostream>
#include <string>

std::string reverse_str(std::string s, int k) {
  int n = s.length();

  for (int i = 0; i < n; i += 2 * k) {
    int left = i;
    int right = std::min(i + k - 1, n - 1);

    while (left < right) {
      std::swap(s[left], s[right]);
      left++;
      right--;
    }
  }

  return s;
};

int main() {
  std::cout << reverse_str("abcdefg", 2) << std::endl;
  std::cout << reverse_str("abcd", 2) << std::endl;

  return 0;
}
