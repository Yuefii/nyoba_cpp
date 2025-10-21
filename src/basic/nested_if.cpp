#include <iostream>

int main() {
  int umur;
  std::cout << "masukan usia kamu: ";
  std::cin >> umur;

  if (umur >= 0) {
    if (umur >= 18) {
      std::cout << "kamu sudah bisa membuat ktp" << std::endl;
    } else {
      std::cout << "kamu belum bisa membuat ktp" << std::endl;
    }
  } else {
    std::cout << "umur yang kamu masukan tidak valid." << std::endl;
  }

  return 0;
}
