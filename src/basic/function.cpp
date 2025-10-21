#include <iostream>
#include <string>

// fungsi ini dapat mempermudah:
// 1. pengorganisasian kode
// 2. pemeliharaan kode
// 3. penggunaan ulang kode

// memiliki 3 bagian utama:
// 1. deklarasi fungsi (function declaration)
// 2. definisi fungsi
// 3. pemanggilan

void say_hello(std::string nama) {
  std::cout << "hello " << nama << ", selamat malam." << std::endl;
}

int perkalian(int a, int b) { return a * b; }
double perkalian(double a, double b) { return a * b; }

int faktorial(int angka) {
  if (angka <= 1) {
    return 1;
  }
  return angka * faktorial(angka - 1);
}

void input_nama(std::string nama = "tidak ada nama") {
  std::cout << nama << std::endl;
}

int main() {
  say_hello("jhon doe");

  int perkalian_bulat = perkalian(10, 5);
  double perkalian_desimal = perkalian(10.5, 5.5);

  std::cout << "hasil dari perkalian bulat: " << perkalian_bulat << std::endl;
  std::cout << "hasil dari perkalian desimal: " << perkalian_desimal
            << std::endl;

  std::cout << "faktorial dari angka 5 adalah " << faktorial(5) << std::endl;

  input_nama();
  input_nama("jhon doe");

  return 0;
}
