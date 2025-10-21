#include <iostream>

// char -> kode ascii (american standard code for information interchange)
// ukuran data:
// - char menempati 1 byte (8bit)
// - rentang nilai char -128 sampai 127 (1 signed char)
// char ini sangat penting karna:
// 1. menyimpan karakter tunggal
// 'A', "1", "$", "%", "&", "*", "@"
// 2. dasar dari manipulasi string
// 3. efisiensi memori

int main() {
  char simbol = '$';
  std::cout << "ini adalah karakter: " << simbol << std::endl;
  std::cout << "kode dari karakter ini adalah: " << int(simbol) << std::endl;
  return 0;
}
