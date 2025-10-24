#include <algorithm>
#include <iostream>
#include <string>

std::string add_binary(std::string a, std::string b) {
  int i = a.size() - 1;
  int j = b.size() - 1;
  int carry = 0;
  std::string result = "";

  while (i >= 0 || j >= 0 || carry == 1) {
    int A = 0;
    int B = 0;

    if (i >= 0) {
      A = a[i] - '0';
      i--;
    }

    if (j >= 0) {
      B = b[j] - '0';
      j--;
    }

    int sum = A + B + carry;

    carry = sum / 2;

    result += char((sum % 2) + '0');
  }

  reverse(result.begin(), result.end());
  return result;
}

int main() {
  std::cout << add_binary("11", "1") << std::endl;
  std::cout << add_binary("1010", "1011") << std::endl;

  return 0;
}
