#include <iostream>
#include <string>
#include <vector>

std::string multiply(std::string num1, std::string num2) {
  if (num1 == "0" || num2 == "0")
    return "0";
  int x = num1.size();
  int y = num2.size();
  std::vector<int> result(x + y, 0);

  for (int i = x - 1; i >= 0; i--) {
    for (int j = y - 1; j >= 0; j--) {
      int mul = (num1[i] - '0') * (num2[j] - '0');
      int sum = mul + result[i + j + 1];

      result[i + j + 1] = sum % 10;
      result[i + j] += sum / 10;
    }
  }

  std::string answer = "";
  int i = 0;
  while (i < result.size() && result[i] == 0) {
    i++;
  }

  while (i < result.size()) {
    answer += (result[i] + '0');
    i++;
  }

  return answer;
};

int main() {
  std::cout << multiply("2", "3") << std::endl;
  std::cout << multiply("123", "456") << std::endl;

  return 0;
}
