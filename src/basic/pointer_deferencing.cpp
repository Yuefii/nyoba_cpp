#include <iostream>

// konsep dasar pointer deferencing
// 1. pointer menunjuk ke memori
// 2. operator deferensi (*)
// 3. berhubungan dengan union dan pointer

union Data {
  int nilai_integer;
  float nilai_float;
  char *nilai_char;
};

union PaketData {
  char raw_data[8];
  struct {
    int id;
    float value;
  } parsed;
};

int main() {
  Data data;

  data.nilai_integer = 100;
  std::cout << "data nilai integer dari union adalah " << data.nilai_integer
            << std::endl;

  data.nilai_float = 10.555;
  std::cout << "data nilai float dari union adalah " << data.nilai_float
            << std::endl;

  char text[] = "halo";
  data.nilai_char = text;
  std::cout << "nilai char pointer di deferensikan: " << data.nilai_char
            << std::endl;

  *data.nilai_char = 'A';
  std::cout << "nilai char yang telah diubah: " << data.nilai_char << std::endl;

  PaketData paket_data;
  char *pointer = paket_data.raw_data;

  pointer[0] = 1;
  pointer[1] = 0;
  pointer[2] = 0;
  pointer[3] = 0;
  pointer[4] = 0;
  pointer[5] = 0;
  pointer[6] = 64;
  pointer[7] = 64;

  std::cout << "data id yang diparsing adalah " << paket_data.parsed.id
            << std::endl;
  std::cout << "parsing value adalah " << paket_data.parsed.value << std::endl;

  return 0;
}
