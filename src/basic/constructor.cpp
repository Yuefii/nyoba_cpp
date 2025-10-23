#include <iostream>
#include <string>
#include <unistd.h>

// ciri constructor yaitu:
// 1. nama constructor sama dengan nama class
// 2. tidak memiliki return, termasuk void
// 3. dapat menerima parameter
// 4. dipanggil secara otomatis saat object dibuat

// jenis constructor:
// - default constructor
// - parameterized constructor
// - copy constructor

class Mobil {
public:
  std::string merk_mobil;
  int tahun_keluaran;

  // constructor
  // jadi data ini akan menjadi default
  Mobil() {
    merk_mobil = "Lancia";
    tahun_keluaran = 1906;
  }

  void display_info() {
    std::cout << "merk mobil: " << merk_mobil << std::endl;
    std::cout << "tahun keluaran: " << tahun_keluaran << std::endl;
  }
};

class Mahasiswa {
public:
  int npm, semester;
  std::string nama, prodi;

  // parameter constructor
  Mahasiswa(int n, std::string nm, std::string p, int smt) {
    npm = n;
    nama = nm;
    prodi = p;
    semester = smt;
  }

  void display_info() {
    std::cout << "npm: " << npm << std::endl;
    std::cout << "nama: " << nama << std::endl;
    std::cout << "prodi: " << prodi << std::endl;
    std::cout << "semester: " << semester << std::endl;
  }
};

class Github {
public:
  std::string link, username;

  // copy constructor
  Github(std::string l, std::string usn) {
    link = l;
    username = usn;
  }

  Github(const Github &object) {
    link = object.link;
    username = object.username;
  }

  void display_info() {
    std::cout << "link github kamu: " << link << "/" << username << std::endl;
  }
};

int main() {
  Mobil mobil, mobil_lain;
  mobil_lain.merk_mobil = "Mercedes‑Benz";
  mobil_lain.tahun_keluaran = 1926;
  mobil.display_info();
  mobil_lain.display_info();

  std::cout << "======================" << std::endl;

  Mahasiswa mahasiswa(2023, "Jhon Doe", "Sistem Informasi", 4);
  mahasiswa.display_info();

  std::cout << "======================" << std::endl;

  Github github_pertama("http://github.com", "Yuefii");
  Github github_kedua = github_pertama;

  github_pertama.display_info();
  github_kedua.display_info();

  return 0;
}
