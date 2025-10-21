#include <iostream>


int main() {
  // bilangan bulat (int)
  // bilangan desimal (floating point)

  // int -> bilangan bulat, misalnya 1, -10, 100
  // int -> mencakup 4 byte -> kisaran sekitar -2 milyar s.d. 2 milyar
  // short -> mencakup 2 byte -> kisaran sekitar -32 ribu s.d. 32 ribu
  // long int -> mencakup 4 atau 8 byte tergantung sistem
  // long long int -> mencakup 8 byte atau lebih (hingga 16 byte tergantung sistem)
  // unsigned int -> mencakup 4 byte -> hanya angka positif (0 s.d. 4 milyar)

  int angka = 500; // bilangan bulat biasa
  unsigned int angka_positif = 1000; // hanya boleh positif
  long int angka_besar = 100000; // bilangan besar
  short angka_kecil = -100; // bilangan kecil
  
  std::cout << angka << std::endl;
  std::cout << angka_positif << std::endl;
  std::cout << angka_besar << std::endl;
  std::cout << angka_kecil << std::endl;

  // float -> mencakup 4 byte -> presisi sekitar 7 digit
  // double -> mencakup 8 byte -> presisi sekitar 15 digit
  // long double -> mencakup 8 - 16 byte -> presisi sekitar 15-18 digit

  float a = 5.1234;
  double b = 10.123456;
  long double c = 1.123456789;

  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;
 
  // boolean

  bool pernyataan_benar = true;
  bool penyataan_salah = false;

  std::cout << "benar: " << pernyataan_benar << std::endl;
  std::cout << "salah: " << penyataan_salah << std::endl;

  // catatan:
  // signed -> default, untuk angka positif dan negatif
  // unsigned -> hanya untuk angka positif
  // short -> mengurangi ukuran tipe data atau mengehemat memori
  // long -> untuk menambah ukuran dari tipe data
  return 0;
}
