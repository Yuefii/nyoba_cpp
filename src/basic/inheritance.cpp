#include <iostream>
#include <string>

// inheritance ini digunakan untuk menciptakan hubungan
// antara class dengan class lain
// 1. base class
// 2. derived class
// 3. akses modifikasi dalam pewarisan
//    - public inheritance
//    - protected inheritance
//    - private inheritance
// 4. overriding dan polimorfisme

class Kendaraan {
protected:
  std::string jenis_kendaraan;
  int jumlah;

public:
  Kendaraan(std::string jk, int j) : jenis_kendaraan(jk), jumlah(j) {}

  void display_info() {
    std::cout << "jenis kendaraaan: " << jenis_kendaraan << std::endl;
    std::cout << "jumlah: " << jumlah << std::endl;
  }

  virtual void pelanggaran() {
    std::cout << "pelanggaran: melanggar ganjil genap" << std::endl;
  }
};

class Motor : public Kendaraan {
public:
  Motor(std::string jk, int j) : Kendaraan(jk, j) {}

  void pelanggaran() override {
    std::cout << "pelanggaran: tidak memakai helm di perjalanan" << std::endl;
  }
};

class Mobil : public Kendaraan {
public:
  Mobil(std::string jk, int j) : Kendaraan(jk, j) {}

  void pelanggaran() override {
    std::cout << "pelanggaran: melanggar rambu lalu lintas" << std::endl;
  }
};

int main() {
  Kendaraan kendaraan("Mobil", 10);
  kendaraan.display_info();
  kendaraan.pelanggaran();

  Motor motor("motor", 20);
  motor.display_info();
  motor.pelanggaran();

  Mobil mobil("mobil pribadi", 5);

  Kendaraan *kendaraan_pointer;
  kendaraan_pointer = &mobil;
  kendaraan_pointer->display_info();
  kendaraan_pointer->pelanggaran();

  return 0;
}
