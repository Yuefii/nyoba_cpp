#include <iostream>

// kapan menggunakan while:
// 1. jumlah iterasi tidak diketahui
// 2. perulangan yang bergantung pada kondisi dinamis

int main() {
  int i = 1;
  while (i <= 10) {
    std::cout << "angka ke-" << i << std::endl;
    i++;
  }

  std::cout << "===================" << std::endl;

  int nilai;
  std::cout << "masukan nilai positif: ";
  std::cin >> nilai;

  while (nilai <= 0) {
    std::cout << "nilai yang kamu masukan tidak valid!" << std::endl;
    std::cout << "masukan nilai lagi: ";
    std::cin >> nilai;
  }

  std::cout << "kamu memasukan nilai: " << nilai << std::endl;
 
  std::cout << "====================" << std::endl;

  double saldo, bunga;
  saldo = 1000.0;
  bunga = 0.25;
  int tahun = 0;

  while (saldo < 2000.0) {
    saldo += saldo * bunga;
    tahun++;
  }
  std::cout << "butuh " << tahun << " tahun untuk menambahkan saldo" << std::endl;
  
  return 0;
}
