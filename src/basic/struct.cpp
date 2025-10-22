#include <iostream>
#include <string>

struct Mahasiswa {
  std::string nama;
  std::string fakultas;
  std::string prodi;
  int npm;
  int semester;
  int umur;
};

int main() {
  Mahasiswa mahasiswa = {
      "Jhon Doe", "Ilmu Komputer", "Sistem Informasi", 202312345, 2, 19,
  };

  std::cout << "Nama: " << mahasiswa.nama << std::endl;
  std::cout << "Fakultas: " << mahasiswa.fakultas << std::endl;
  std::cout << "Prodi: " << mahasiswa.prodi << std::endl;
  std::cout << "NPM: " << mahasiswa.npm << std::endl;
  std::cout << "Semester: " << mahasiswa.semester << std::endl;
  std::cout << "Umur: " << mahasiswa.umur << std::endl;

  return 0;
}
