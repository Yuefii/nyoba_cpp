#include <iostream>

// kenapa harus menggunakan passing pointer?
// 1. efiensi
// 2. modifikasi
// 3. mengelola memori dinamis

void modifikasi_nilai(int *pointer) { *pointer = 123; }

void update_nilai_array(int *array, int ukuran) {
  for (int i = 0; i < ukuran; i++) {
    array[i] += 10;
  }
}

void alokasi_memori(int **pointer, int ukuran) {
  *pointer = new int[ukuran];

  for (int i = 0; i < ukuran; i++) {
    (*pointer)[i] = i + 1;
  }
}

void print_nilai(const int *pointer) {
  if (pointer == nullptr) {
    std::cout << "pointer tidak valid" << std::endl;
  }
  std::cout << "nilai: " << *pointer << std::endl;
}

int main() {
  int x = 100;

  std::cout << "nilai x sebelum fungsi modifikasi nilai dipanggil: " << x
            << std::endl;

  modifikasi_nilai(&x);

  std::cout << "nilai x sesudah fungsi modifikasi nilai dipanggil: " << x
            << std::endl;

  std::cout << "===============================" << std::endl;

  int data_array[] = {1, 2, 3, 4, 5};
  int ukuran = sizeof(data_array) / sizeof(data_array[0]);

  std::cout << "data array sebelum fungsi update nilai array di panggil: "
            << std::endl;

  for (int i = 0; i < ukuran; i++) {
    std::cout << data_array[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "data array sesudah fungsi update nilai array dipanggil: "
            << std::endl;

  update_nilai_array(data_array, ukuran);

  for (int i = 0; i < ukuran; i++) {
    std::cout << data_array[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "===============================" << std::endl;

  int *array_memori = nullptr;
  int ukuran_memori = 5;

  alokasi_memori(&array_memori, ukuran_memori);

  std::cout << "array dinamis yang dialokasikan " << std::endl;

  for (int i = 0; i < ukuran; i++) {
    std::cout << array_memori[i] << " ";
  }
  std::cout << std::endl;

  delete[] array_memori;

  std::cout << "===============================" << std::endl;

  int nilai = 200;
  print_nilai(&nilai);

  return 0;
}
