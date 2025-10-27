#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

int num_unique_emails(std::vector<std::string> &emails) {
  std::unordered_set<std::string> unique_emails;

  for (std::string email : emails) {
    std::string local = "";
    std::string domain = "";

    int at_pos = email.find('@');
    local = email.substr(0, at_pos);
    domain = email.substr(at_pos);

    std::string cleaned_local = "";
    for (char c : local) {
      if (c == '+')
        break;
      if (c == '.')
        continue;
      cleaned_local += c;
    }

    std::string final_email = cleaned_local + domain;
    unique_emails.insert(final_email);
  }

  return unique_emails.size();
};

int main() {
  std::vector<std::string> email_case_1 = {"test.email+alex@leetcode.com",
                                           "test.e.mail+bob.cathy@leetcode.com",
                                           "testemail+david@lee.tcode.com"};

  std::vector<std::string> email_case_2 = {"a@leetcode.com", "b@leetcode.com",
                                           "c@leetcode.com"};

  std::cout << num_unique_emails(email_case_1) << std::endl;
  std::cout << num_unique_emails(email_case_2) << std::endl;

  return 0;
}
