#include <iostream>

int main () {
  int nilai;
  std::cout << "masukan nilai positif: ";
  std::cin >> nilai;

  if (nilai < 0){
    goto error_response;
  }

  std::cout << "kamu memasukan nilai: " << nilai << std::endl;
  return 0;

error_response:
  std::cout << "ERROR: kamu memasukan nilai yang bukan positif" << std::endl; 
  return 1;
}
