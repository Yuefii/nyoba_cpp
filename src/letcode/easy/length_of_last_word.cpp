#include <iostream>
#include <string>

int length_of_last_word(std::string s) {
  int count = 0;
  int i = s.size() - 1;

  while (i >= 0) {
    if (s[i] != ' ') {
      count++;
    } else if (count > 0) {
      break;
    }
    i--;
  }

  return count;
}

int main() {
  std::cout << length_of_last_word("Hello World") << std::endl;
  std::cout << length_of_last_word("   fly me   to   the moon  ") << std::endl;
  std::cout << length_of_last_word("luffy is still joyboy") << std::endl;

  return 0;
}
