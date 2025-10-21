#include <iostream>

int main() {
  int a = 100;

  if (a > 50) {
    std::cout << "nilai a lebih dari 50 yaitu: " << a << std::endl;
  }

  if (a > 110) {
    std::cout << "nilai a lebih dari 110 yaitu: " << a << std::endl;
  } else {
    std::cout << "nilai a kurang dari 110 yaitu: " << a << std::endl;
  }

  if (a == 200) {
    std::cout << "nilai a sama dengan " << a << std::endl;
  } else if (a < 200) {
    std::cout << "nilai a kurang dari 200 yaitu: " << a << std::endl;
  } else {
    std::cout << "tidak ada nilai yang sesuai dari kriteria" << std::endl;
  }

  std::cout << "=======================" << std::endl;

  int nilai;
  std::cout << "masukan nilai kamu sekarang: ";
  std::cin >> nilai;

  if (nilai >= 80) {
    std::cout << "kamu lulus" << std::endl;
  } else {
    std::cout << "kamu tidak lulus" << std::endl;
  }

  return 0;
}
