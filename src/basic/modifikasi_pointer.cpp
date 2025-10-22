#include <iostream>

// pada dasar ada 2 cara untuk memodifikasi pointer:
// 1. mengubah alamat yang disimpan oleh pointer
// 2. mengubah data di alamat yang ditunjuk oleh pointer
//    - mengubah nilai anggota tertentu pada union
//    - menunjukan pointer ke bagian lain dari union atau data lain

union Data {
  int nilai_integer;
  float nilai_float;
  char *karakter_pointer;
};

union DataKita {
  int array[5];
  float nilai_float;
};

int main() {
  int a, b;
  a = 50;
  b = 100;

  int *pointer_a = &a;

  std::cout << "nilai a sebelum data di modif: " << *pointer_a << std::endl;

  *pointer_a = 150;
  std::cout << "nilai a sesudah data di modif oleh pointer: " << a << std::endl;

  pointer_a = &b;
  std::cout << "nilai pointer dari pointer a adalah " << *pointer_a
            << std::endl;

  std::cout << "==================================" << std::endl;

  Data data;

  data.nilai_integer = 100;
  std::cout << "nilai integer sekarang adalah " << data.nilai_integer
            << std::endl;

  float *pointer_nilai_float = reinterpret_cast<float *>(&data);
  *pointer_nilai_float = 100.555;
  std::cout << "nilai float dari desimal sekarang adalah " << data.nilai_float
            << std::endl;

  char kalimat[] = "Aello, world!";
  data.karakter_pointer = kalimat;
  std::cout << "kalimat sebelum dimodifikasi: " << data.karakter_pointer
            << std::endl;

  *data.karakter_pointer = 'H';
  std::cout << "kalimat sesudah dimodifikasi: " << data.karakter_pointer
            << std::endl;

  std::cout << "==================================" << std::endl;

  DataKita data_kita;
  data_kita.array[0] = 100;
  data_kita.array[1] = 200;
  data_kita.array[2] = 300;
  data_kita.array[3] = 400;
  data_kita.array[4] = 500;

  int *pointer_array = data_kita.array;

  std::cout << "data sebelum dimodif: " << std::endl;

  for (int i = 0; i < 5; i++) {
    std::cout << *(pointer_array + i) << std::endl;
  }

  *(pointer_array + 3) = 4000;

  std::cout << "data setelah dimodif: " << std::endl;

  for (int i = 0; i < 5; i++) {
    std::cout << *(pointer_array + i) << std::endl;
  }

  return 0;
}
