#include <iostream>

int main() {
  int pilihan;

  std::cout << "Pilihan Menu" << std::endl;
  std::cout << "1. Mie Ayam" << std::endl;
  std::cout << "2. Nasi Goreng" << std::endl;
  std::cout << "3. Es Teh" << std::endl;
  std::cout << "4. Es Jeruk" << std::endl;
  std::cout << "Masukan pilihan kamu: ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "kamu memilih Mie Ayam" << std::endl;
    break;
  case 2:
    std::cout << "kamu memilih Nasi Goreng" << std::endl;
    break;
  case 3:
    std::cout << "kamu memilih Es Teh" << std::endl;
    break;
  case 4:
    std::cout << "kamu memilih Es Jeruk" << std::endl;
    break;
  default:
    std::cout << "pilihan menu yang kamu pilih tidak ada" << std::endl;
  }

  // contoh lain
  std::cout << "=========================" << std::endl;
  int a, b;
  char operasi;
  std::cout << "masukan nilai a: ";
  std::cin >> a;
  std::cout << "masukan operator: ";
  std::cin >> operasi;
  std::cout << "masukan nilai b: ";
  std::cin >> b;

  switch (operasi) {
  case '+':
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    break;
  case '-':
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    break;
  case '*':
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    break;
  case '/':
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    break;
  case '%':
    std::cout << a << " % " << b << " = " << a % b << std::endl;
    break;
  default:
    std::cout << "operator yang kamu masukan tidak ada";
  }

  return 0;
}
