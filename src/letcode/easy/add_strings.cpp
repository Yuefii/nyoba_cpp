#include <iostream>
#include <string>

std::string add_strings(std::string num1, std::string num2) {
  int i = num1.size() - 1;
  int j = num2.size() - 1;
  int carry = 0;
  std::string result = "";

  while (i >= 0 || j >= 0 || carry > 0) {
    int x = 0;
    int y = 0;

    if (i >= 0) {
      x = num1[i] - '0';
      i--;
    }

    if (j >= 0) {
      y = num2[j] - '0';
      j--;
    }

    int sum = x + y + carry;
    int last_digit = sum % 10;

    carry = sum / 10;
    result = char('0' + last_digit) + result;
  }

  return result;
}

int main() {
  std::cout << add_strings("11", "123") << std::endl;
  std::cout << add_strings("456", "77") << std::endl;
  std::cout << add_strings("0", "0") << std::endl;

  return 0;
}
