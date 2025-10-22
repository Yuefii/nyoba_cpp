#include <iostream>

// operasi ini sangat berguna dalam bekerja di array
// operasi yang didukung yaitu:
// + dan - -> menggeser pointer maju dan mundur dari posisi tertentu
// < > == dst -> untuk membandingan posisi pointer didalam blok memori
// ada juga namanya selisih seperti:
// pointer_pertama - pointer_kedua
// int (4 byte) -> + 1 -> akan menggeser alamat memori sebanyak 4 byte
// char (1 byte) -> + 1 -> akan menggeser alamat memori sebanyak 1 byte
int main() {
  int array[] = {100, 200, 300, 400, 500};
  int *pointer_array = array;

  for (int i = 0; i < 5; i++) {
    std::cout << "indeks ke-" << i << " adalah " << *(pointer_array + i)
              << std::endl;
  }

  std::cout << "pointer pertama adalah " << *pointer_array << std::endl;

  pointer_array++;

  std::cout << "ketika pointer sudah digeser: " << *pointer_array << std::endl;

  pointer_array += 2;

  std::cout << "ketika pointer digeser += 2 yaitu " << *pointer_array
            << std::endl;

  pointer_array--;

  std::cout << "ketika pointer balik kesebelumnya: " << *pointer_array
            << std::endl;

  pointer_array -= 2;

  std::cout << "ketika pointer balik ke -= 2 yaitu " << *pointer_array
            << std::endl;

  int *array_pertama = &array[0];
  int *array_ketiga = &array[2];
  int jarak = array_pertama - array_ketiga;

  std::cout << "jarak antara array indeks ke-1 dan ke-3 adalah " << jarak
            << std::endl;

  char blok_memori[] = {'a', 'b', 'c', 'd', 'e'};
  char *pointer_blok_memori = blok_memori;

  for (int i = 0; i < 5; i++) {
    std::cout << *(pointer_blok_memori + i) << " ";
  }

  std::cout << std::endl;

  *(pointer_blok_memori + 1) = 'B';

  for (int i = 0; i < 5; i++) {
    std::cout << *(pointer_blok_memori + i) << " ";
  }

  std::cout << std::endl;

  return 0;
}
