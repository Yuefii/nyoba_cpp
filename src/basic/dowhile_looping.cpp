#include <iostream>

// jika true -> loop akan berulang
// jika false -> loop akan berhenti

// keunggulan dari do while ini:
// 1. eksekusi minimal satu kali
// 2. mudah dibaca
// 3. fleksibel

int main() {
  int i = 1;

  do {
    std::cout << "angka ke-" << i << std::endl;
    i++;
  } while (i <= 10);

  std::cout << "========================" << std::endl;

  int nilai;

  do {
    std::cout << "masukan nilai antara 1 - 20: ";
    std::cin >> nilai;

    if (nilai < 1 || nilai > 20) {
      std::cout << "nilai yang kamu masukan tidak sesuai" << std::endl;
    }
  } while (nilai < 1 || nilai > 20);

  std::cout << "kamu memasukan nilai: " << nilai << std::endl;

  std::cout << "=======================" << std::endl;

  int pilihan;

  do {
    std::cout << "Pilihan Menu" << std::endl;
    std::cout << "1. Mie Ayam" << std::endl;
    std::cout << "2. Es Teh" << std::endl;
    std::cout << "3. tidak jadi pesan" << std::endl;
    std::cout << "masukan pilihan kamu: ";
    std::cin >> pilihan;

    switch (pilihan) {
    case 1:
      std::cout << "kamu memilih Mie Ayam" << std::endl;
      break;
    case 2:
      std::cout << "kamu memilih Es Teh" << std::endl;
      break;
    default:
      std::cout << "pilihan kamu tidak ada" << std::endl;
      break;
    }
  } while (pilihan != 3);

  std::cout << "============================" << std::endl;

  int angka, faktorial = 1;
  std::cout << "masukan angka: ";
  std::cin >> angka;

  int x = angka;
  do {
    faktorial *= x;
    x--;
  } while (x > 0);

  std::cout << "faktorial dari " << angka << " adalah " << faktorial
            << std::endl;

  return 0;
}
