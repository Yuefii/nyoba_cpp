#include <iostream>
#include <string>
#include <vector>

int day_of_year(std::string date) {
  int year = std::stoi(date.substr(0, 4));
  int month = std::stoi(date.substr(5, 2));
  int day = std::stoi(date.substr(8, 2));

  std::vector<int> day_in_month = {31, 28, 31, 30, 31, 30,
                                   31, 31, 30, 31, 30, 31};
  bool is_leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
  if (is_leap) {
    day_in_month[1] = 29;
  }

  int total_day = 0;
  for (int i = 0; i < month - 1; i++) {
    total_day += day_in_month[i];
  }

  total_day += day;

  return total_day;
};

int main() {
  std::cout << day_of_year("2019-01-09") << std::endl;
  std::cout << day_of_year("2019-02-10") << std::endl;

  return 0;
}
