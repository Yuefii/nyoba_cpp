#include <iostream>
#include <string>

std::string convert_to_title(int columnNumber) {
  std::string result = "";

  while(columnNumber > 0) {
    columnNumber--;
    int remainder = columnNumber % 26;
    char letter = 'A' + remainder;
    result = letter + result;
    columnNumber /= 26;
  }

  return result;
}

int main() {
  std::cout << convert_to_title(1) << std::endl;
  std::cout << convert_to_title(28) << std::endl;
  std::cout << convert_to_title(701) << std::endl;

  return 0;
}
