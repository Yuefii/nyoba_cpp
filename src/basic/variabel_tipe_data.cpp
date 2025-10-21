#include <iostream>
 
// variabel:
// - nama -> identitas.
// - tipe data -> jenis data yang disimpan.
// tipe data:
// - jenis informasi -> bilangan bulat, desimal, teks.
// - berapa banyak ruang memori yang akan digunakan.

int main() {
  // decimal
  int umur = 26;
  std::cout << umur << std::endl;
  std::cout << "umur saya sekarang adalah " << umur << std::endl;
  umur = 21;
  std::cout << umur << std::endl;
  
  // float
  float suhu = 36.6;
  std::cout << suhu << std::endl;

  // char
  char karakter = 'A';
  std::cout << karakter << std::endl;

  // string
  std::string message = "hari ini saya sedang berbahagia.";
  std::cout << message << std::endl;

  // boolean
  bool pernyataan = true;
  std::cout << pernyataan << std::endl;
  
  // double
  double nilai_tinggi = 5.5555333355555;
  std::cout << nilai_tinggi << std::endl;

  // unsigned int atau bilangan bulat yang akan selalu positif.
  unsigned int usia = 22;
  std::cout << usia << std::endl;

  // constanta atau variabel yang tidak bisa diubah
  const float temprature = 21.6;
  std::cout << temprature << std::endl;

  return 0;
}
