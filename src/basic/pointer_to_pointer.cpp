#include <iostream>

// pointer biasa -> variabel yang menyimpan alamat memori dari variabel lain
// pointer ke pointer -> pointer yang menyimpan alamat memori dari pointer lain

// int** pointer_ke_pointer;
// variabel x, pointer p -> x, pp -> p,
// x -> simpan nilai data
// p -> simpan alamat memori x
// pp -> simpan alamat memori dari p

// contoh:
// x -> 0x100
// p -> 0x200
// pp -> 0x300

// jadi pointer ke pointer digunakan pada situasi:
// 1. alokasi memori dinamis
// 2. parameter fungsi
// 3. hirarki data

void modifikasi_nilai(int **bb) { **bb = 100; };

int main() {
  int x = 120;
  int *p = &x;
  int **pp = &p;

  std::cout << "nilai x adalah " << x << std::endl;
  std::cout << "alamat dari x (&x) adalah " << &x << std::endl;
  std::cout << "nilai dari p (alamat x) adalah " << p << std::endl;
  std::cout << "alamat dari p (&p) adalah " << &p << std::endl;
  std::cout << "nilai dari pp (alamat p) adalah " << pp << std::endl;
  std::cout << "nilai yang ditunjuk oleh pp (*pp) adalah " << *pp << std::endl;
  std::cout << "nilai akhir dari **pp adalah " << **pp << std::endl;

  std::cout << "==============================" << std::endl;

  int a = 234;
  int *b = &a;
  int **bb = &b;

  std::cout << "nilai sebelum kita modifikasi adalah " << a << std::endl;
  modifikasi_nilai(bb);
  std::cout << "nilai sesudah kita modifikasi dari double pointer adalah " << a
            << std::endl;

  std::cout << "==============================" << std::endl;

  int baris = 2, kolom = 3;
  int **matriks = new int *[baris];

  for (int i = 0; i < baris; i++) {
    matriks[i] = new int[kolom];
  }

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; ++j) {
      matriks[i][j] = i * kolom + j;
    }
  }

  std::cout << "matriks adalah " << std::endl;

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; ++j) {
      std::cout << matriks[i][j] << " ";
    }
    std::cout << std::endl;
  }

  for (int i = 0; i < baris; i++) {
    delete[] matriks[i];
  }
  delete[] matriks;

  return 0;
}
