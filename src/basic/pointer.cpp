#include <iostream>
#include <string>

// pointer adalah variabel yang menyimpan alamat memori dari variabel lain
// pointer ini tidak menyimpan nilai data secara langsung,
// melainkan akan menyimpan alamat memori dimana data tersebut berada
//
// tipe_data* nama_pointer;
// int* integer_pointer;
// 1. deferencing pointer (*)
//    - mengakses nilai yang ditunjuk oleh si pointer,
//    yaitu alamat memori yang disimpan oleh si pointer

struct Identitas {
  std::string nama;
  int umur;
  std::string alamat;
};

int main() {
  int nilai = 20;
  int *nilai_pointer = &nilai;

  std::cout << "nilai dari variabel adalah " << nilai << std::endl;
  std::cout << "alamat memori dari variabel nilai " << &nilai << std::endl;
  std::cout << "nilai yang ditunjuk oleh pointer adalah " << *nilai_pointer
            << std::endl;
  std::cout << "nilai pointer menyimpan alamat: " << nilai_pointer << std::endl;

  // mengubah nilai
  *nilai_pointer = 200;
  std::cout << "variabel nilai sudah diganti menjadi " << nilai << std::endl;

  float nilai_float = 10.1010;
  float *nilai_float_pointer = &nilai_float;

  std::cout << "nilai float adalah " << nilai_float << std::endl;
  std::cout << "alamat dari memori nilai float adalah " << &nilai_float
            << std::endl;
  std::cout << "nilai pointernya menyimpan alamat: " << nilai_float_pointer
            << std::endl;

  int array[] = {1, 2, 3, 4, 5};
  int *array_pointer = array;

  std::cout << "alamat memori dari array adalah " << array << std::endl;
  // nilai yang diambil pasti adalah indeks pertama
  std::cout << "nilai dari pointernya adalah " << *array_pointer << std::endl;

  for (int i = 0; i < 5; i++) {
    std::cout << "indeks array[" << i << "] = " << *(array_pointer + i)
              << std::endl;
  }

  Identitas identitas = {"Jhon Doe", 24, "jakarta"};
  Identitas *pointer_identitas = &identitas;

  std::cout << "Nama: " << identitas.nama << std::endl;
  std::cout << "Umur: " << identitas.umur << std::endl;
  std::cout << "Alamat: " << identitas.alamat << std::endl;

  pointer_identitas->umur = 26;
  std::cout << "Umur setelah dirubah menjadi " << identitas.umur << std::endl;

  return 0;
}
