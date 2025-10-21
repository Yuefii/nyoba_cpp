#include <iostream>

// true (benar)
// false (salah)
// - ukuran memori dari boolean -> 1 byte
// - nilai yang valid
// true itu representasinya dalam angka 1
// false itu representasinya dalam angka 0
// mengapa konsep boolean sangat berguna?
// 1. untuk pengambilan keputusan
// 2. efisiensi memori
// 3. dasar dari logika AND OR NOT

int main(){
  bool benar = true;
  bool salah = false;

  std::cout << "keputusan kamu benar: " << benar << std::endl;
  std::cout << "keputusan kamu salah: " << salah << std::endl;

  bool memiliki_payung = true;
  bool apakah_sedang_hujan = false;
  bool keluar_rumah = memiliki_payung || !apakah_sedang_hujan;

  std::cout << "apakah kamu bisa keluar rumah sekarang? jawaban: " << keluar_rumah << std::endl;

  return 0;
}
