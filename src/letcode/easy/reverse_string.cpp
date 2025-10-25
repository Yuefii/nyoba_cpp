#include <iostream>
#include <vector>

void reverse_string(std::vector<char> &s) {
  int left = 0;
  int right = s.size() - 1;

  while (left < right) {
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    left++;
    right--;
  }
};

int main() {
  std::vector<char> case_1 = {'h', 'e', 'l', 'l', 'o'};
  std::vector<char> case_2 = {'H', 'a', 'n', 'n', 'a', 'h'};

  reverse_string(case_1);
  reverse_string(case_2);

  for (char c : case_1)
    std::cout << c << " ";
  std::cout << std::endl;

  for (char c : case_2)
    std::cout << c << " ";
  std::cout << std::endl;

  return 0;
}
