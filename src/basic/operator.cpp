#include <iostream>
#include <ostream>

// operator aritmatika
// + -> penjumlahan = a + b
// - -> pengurangan = a - b
// * -> perkalian = a * b
// / -> pembagian = a / b
// % -> modulus = a % b

// operator relational
// == -> sama dengan -> a == b
// != -> tidak sama dengan -> a != b
// > -> lebih besar -> a > b
// < -> lebih kecil -> a < b
// >= -> lebih besar sama dengan -> a >= b
// <= -> lebih kecil sama dengan -> a <= b

// operator logika
// digunakan untuk operasi logika pada boolean
// && -> AND (logika dan) -> x && y
// ! -> (logika tidak) NOT -> !x
// || -> OR -> x || y

// operator bitwise
// & -> AND bitwise -> a & b
// | -> OR bitwise -> a | b
// ^ -> XOR bitwise -> a ^ b
// ~ -> NOT bitwise -> ~a
// << -> shift  kiri bitwise -> a << 1
// >> -> shift kanan bitwise -> b >> 1

// operator assign
// = -> penugasan -> a = b
// += -> tambah assign ->  a += b
// -= -> kurang assign -> a -= b
// *= -> perkalian assign -> a *= b
// /= -> pembagian assign -> a /= b
// %= -> modulus assign -> a %= b

int main() {
  int a, b;

  a = 30;
  b = 10;

  std::cout << "penjumlahan: " << a + b << std::endl;
  std::cout << "pengurangan: " << a - b << std::endl;
  std::cout << "perkalian: " << a * b << std::endl;
  std::cout << "pembagian: " << a / b << std::endl;
  std::cout << "sisa bagi: " << a % b << std::endl;

  std::cout << "apakah a == b : " << (a == b) << std::endl;
  std::cout << "apakah a != b : " << (a != b) << std::endl;
  std::cout << "apakah a > b : " << (a > b) << std::endl;
  std::cout << "apakah a < b : " << (a < b) << std::endl;

  bool x, y;
  x = true;
  y = false;

  std::cout << "x && y " << (x && y) << std::endl;
  std::cout << "x || y " << (x || y) << std::endl;
  std::cout << "!x" << (!x) << std::endl;

  std::cout << "a & b " << (a & b) << std::endl;
  std::cout << "a | b " << (a | b) << std::endl;
  std::cout << "a ^ b " << (a ^ b) << std::endl;
  std::cout << "~a " << (~a) << std::endl;
  std::cout << "a << 1 " << (a << 1) << std::endl;
  std::cout << "b >> 1 " << (b >> 1) << std::endl;

  a += 20;
  std::cout << "hasil a + 20 adalah " << a << std::endl;

  return 0;
}
