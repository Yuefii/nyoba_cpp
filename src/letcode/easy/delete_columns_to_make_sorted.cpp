#include <iostream>
#include <string>
#include <vector>

int min_deletetion_size(std::vector<std::string> &strs) {
  int line = strs.size();
  int columns = strs[0].size();
  int delete_count = 0;

  for (int i = 0; i < columns; i++) {
    for (int j = 1; j < line; j++) {
      if (strs[j - 1][i] > strs[j][i]) {
        delete_count++;
        break;
      }
    }
  }

  return delete_count;
};

int main() {
  std::vector<std::string> example_1 = {"cba", "daf", "ghi"};
  std::vector<std::string> example_2 = {"a", "b"};
  std::vector<std::string> example_3 = {"zyx", "wvu", "tsr"};

  std::cout << min_deletetion_size(example_1) << std::endl;
  std::cout << min_deletetion_size(example_2) << std::endl;
  std::cout << min_deletetion_size(example_3) << std::endl;
}
