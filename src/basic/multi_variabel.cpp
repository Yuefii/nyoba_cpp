#include <iostream>

// berfungsi untuk meringkas code, menjadi terstruktur dan mudah dibaca
// biasanya bekerja ketika memiliki banyak variabel dengan tipe data yang sama
// mengapa konsep multi variabel ini penting>
// 1. mengurangi duplikasi code
// 2. meningkatkan efisiensi
// 3. membuat kode lebih bersih atau terorganisir

int main(){
  int a = 10, b = 20, c = 30;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;

  int tinggi, umur;
  std::string nama = "jhon doe";
  tinggi = 175;
  umur = 23;
  std::cout << "nama saya adalah " << nama << ", saya memiliki tinggi badan: " << tinggi << ", dan umur saya saat ini adalah " << umur << std::endl;

  return 0;
}
