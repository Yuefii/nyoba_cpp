#include <iostream>

// modifikasi tipe data ini:
// 1. mengubah ukuran memori dan juga tipe data
// 2. rentang nilai yang akan disimpan dalam tipe data 
// 3. aksebilitas

// jenis-jenis modifier:
// 1. signed
// 2. unsigned
// 3. short
// 4. long
// 5. const, volatile, mutable

// jadi modifier tipe ini biasanya digunakan dalam kombinasi tipe data seperti:
// int, float, char
// kombinasi ini untuk menentukan:
// 1. ukuran dari variabel (short, log)
// 2. rentang nilai (signed, unsigned)
// 3. kekelalan dari nilai (const)

int main() {
  signed int a = -100;
  unsigned int b = 100;
  std::cout << a << std::endl;
  std::cout << b << std::endl;

  short int c = 1234;
  long int d = 123456789;
  std::cout << c << std::endl;
  std::cout << d << std::endl;

  signed short int ac = -1234;
  unsigned long int bd = 123456789;
  std::cout << ac << std::endl;
  std::cout << bd << std::endl;

  const float gravitasi = 5.5;
  std::cout << gravitasi << std::endl;

  volatile int nilai = 10000;
  std::cout << nilai << std::endl;

  return 0;
}
