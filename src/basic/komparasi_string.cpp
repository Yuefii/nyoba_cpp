#include <iostream>
#include <string>
// apakah komparasi string itu?
// sebuah operasi yang membandingkan 2 string untuk menentukan hubungan antara
// keduanya apakah bisa sama, lebih besar atau lebih kecil satu sama lain

// dalam c++ string komprasi biasanya dilakukan dengan:
// 1. operator relasional == != < <= > >=
// 2. compare()

int main() {
  std::string a, b, c;
  a = "melon";
  b = "semangka";
  c = "melon";

  if (a == c) {
    std::cout << "nama buah tersebut sama!" << std::endl;
  } else {
    std::cout << "nama buah tersebut tidak sama" << std::endl;
  }

  if (a > b) {
    std::cout << "buah a memiliki panjang kata yang lebih besar." << std::endl;
  } else {
    std::cout << "buah b memiliki kata lebih panjang dari buah a" << std::endl;
  }

  // compare() -> 0 jika string sama
  // minus ketika string pertama lebih kecil
  // plus ketika string pertama lebih besar

  int hasil_komparasi = a.compare(b);
  if (hasil_komparasi == 0) {
    std::cout << "buah a dan buah b sama teksnya" << std::endl;
  } else if (hasil_komparasi < 0) {
    std::cout << "buah a katanya lebih kecil dari buah b" << std::endl;
  } else {
    std::cout << "buah a lebih besar dari buah b" << std::endl;
  }

  return 0;
}
