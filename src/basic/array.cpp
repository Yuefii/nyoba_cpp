#include <iostream>

// konsep dasar array:
// 1. indeks terurut -> mulai dari 0
// 2. tipe data yang sama
// 3. ukuran yang tetap

int main() {
  int daftar_pustaka[5] = {1, 3, 5, 8, 11};
  std::cout << "indeks pertama adalah " << daftar_pustaka[0] << std::endl;
  std::cout << "indeks kedua adalah " << daftar_pustaka[1] << std::endl;
  std::cout << "indeks ketiga adalah " << daftar_pustaka[2] << std::endl;
  std::cout << "indeks keempat adalah " << daftar_pustaka[3] << std::endl;
  std::cout << "indeks kelima adalah " << daftar_pustaka[4] << std::endl;

  daftar_pustaka[0] = 100;
  std::cout << "indeks pertama setelah diganti " << daftar_pustaka[0]
            << std::endl;

  // mengiterasi array dengan looping
  int daftar_angka[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    std::cout << "indeks ke-" << i << " adalah " << daftar_angka[i]
              << std::endl;
  }

  int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << "matriks[" << i << "][" << j << "]: " << matriks[i][j]
                << std::endl;
    }
  }

  int ukuran;
  std::cout << "masukan ukuran dari array: ";
  std::cin >> ukuran;

  int *array_dinamis = new int[ukuran];
  for (int i = 0; i < ukuran; i++) {
    array_dinamis[i] = i * 10;
  }

  std::cout << "isi dari array dinamis adalah: ";
  for (int i = 0; i < ukuran; i++) {
    std::cout << array_dinamis[i] << " " << std::endl;
  }

  delete[] array_dinamis;

  return 0;
}
