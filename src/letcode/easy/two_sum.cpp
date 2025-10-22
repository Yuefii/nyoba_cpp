#include <iostream>
#include <vector>

std::vector<int> two_sum(std::vector<int> &nums, int target) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        return {i, j};
      }
    }
  }
  return {};
}

int main() {
  std::vector<int> nums_case_1, nums_case_2, nums_case_3;

  nums_case_1 = {2, 7, 11, 15};
  nums_case_2 = {3, 2, 4};
  nums_case_3 = {3, 3};

  int target_case_1, target_case_2, target_case_3;

  target_case_1 = 9;
  target_case_2 = 6;
  target_case_3 = 6;

  std::vector<int> result_case_1 = two_sum(nums_case_1, target_case_1);
  std::vector<int> result_case_2 = two_sum(nums_case_2, target_case_2);
  std::vector<int> result_case_3 = two_sum(nums_case_3, target_case_3);

  std::cout << "[" << result_case_1[0] << "," << result_case_1[1] << "]"
            << std::endl;
  std::cout << "[" << result_case_2[0] << "," << result_case_2[1] << "]"
            << std::endl;
  std::cout << "[" << result_case_3[0] << "," << result_case_3[1] << "]"
            << std::endl;

  return 0;
}
