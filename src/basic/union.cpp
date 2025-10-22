#include <iostream>

// union adalah tipe data khusus yang memungkinkan beberapa variabel berbagi
// satu lokasi memori yang sama. karakteristik pada union:
// 1. satu blok memori
// 2. efisiensi memori
// 3. mutual exclusion

union KumpulanData {
  int nilai_integer;
  float nilai_float;
  char nilai_char;
};

union PaketData {
  char raw_data[3];
  struct {
    char header;
    char command;
    char payload;
  } parsed;
};

int main() {
  KumpulanData kumpulan_data;

  kumpulan_data.nilai_integer = 20;
  std::cout << "nilai integer: " << kumpulan_data.nilai_integer << std::endl;

  kumpulan_data.nilai_float = 10.55;
  std::cout << "nilai float: " << kumpulan_data.nilai_float << std::endl;

  kumpulan_data.nilai_char = 'A';
  std::cout << "nilai char: " << kumpulan_data.nilai_char << std::endl;

  // NOTE:
  // karena semua berbagi memori, jadi nilai sebelumnya akan tertimpa
  // contoh kita panggil ulang nilai integer
  // maka yang terpanggil yaitu nilai char

  std::cout << "nilai integer yang tertimpa nilai char: "
            << kumpulan_data.nilai_integer << std::endl;

  PaketData paket_data;

  paket_data.raw_data[0] = 'A';
  paket_data.raw_data[1] = 'B';
  paket_data.raw_data[2] = 'C';

  std::cout << "header: " << paket_data.parsed.header << std::endl;
  std::cout << "command: " << paket_data.parsed.command << std::endl;
  std::cout << "payload: " << paket_data.parsed.payload << std::endl;

  return 0;
}
