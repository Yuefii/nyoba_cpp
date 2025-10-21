#include <iostream>
#include <string>
// input = mengambil data dari pengguna
// output = menampilkan informasi pada kita
// library iostream
// std::cin -> digunakan untuk menerima input pengguna
// std::cout -> digunakan untuk mencetak output ke terminal
// std::cerr -> digunakan untuk menampilkan pesan error ke terminal
// std::clog -> digunakan untuk pesan log ke terminal

// >> (extraction operator): untuk mengambil input dari pengguna ke program
// << (insertion operator): untuk mengirimkan output dari program ke terminal

int main() {
  std::string nama;
  int tinggi_badan;
  
  std::cerr << "ERROR: pesan error" << std::endl;
  std::clog << "LOG: program ini sedang berjalan" << std::endl;

  std::cout << "silahkan masukan nama kamu: ";
  std::getline(std::cin, nama);
  std::cout << "silahkan masukan tinggi badan kamu: ";
  std::cin >> tinggi_badan;
  std::cout << "oke jadi nama kamu adalah " << nama << ". tinggi badan kamu saat ini adalah " << tinggi_badan << "cm." << std::endl;
  
  return 0;
}
