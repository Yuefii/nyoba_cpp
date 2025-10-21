#include <cstddef>
#include <iostream>
#include <string>

int main() {
  std::string message = "tetap semangat meskipun code kamu banyak error";
  std::cout << message[10] << std::endl;

  std::cout << "=================" << std::endl;

  std::string username = "Yuefii";
  std::string github = "http:://github.com/";
  std::string combine = github + username;
  std::cout << combine << std::endl;

  // menggabungkan string mengggunakan append
  std::string combine_append = github.append(username);
  std::cout << combine_append << std::endl;

  std::cout << "=================" << std::endl;

  std::string teks = "halo, selamat malam.";
  std::cout << "panjang teks ini adalah: " << teks.length() << std::endl;

  // memotong string
  std::string cut = teks.substr(6, 8);
  std::cout << cut << std::endl;

  // mencari posisi kata
  size_t posisi = teks.find("malam");
  std::cout << "kata malam terdapat pada posisi indeks: " << posisi
            << std::endl;

  // mengganti sebuah kata
  teks.replace(14, 20, "pagi");
  std::cout << teks << std::endl;

  return 0;
}
