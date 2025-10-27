#include <iostream>
#include <string>

class Kendaraan {
protected:
  std::string nama;
  int kecepatan;

public:
  Kendaraan(std::string n, int k) : nama(n), kecepatan(k) {}

  void display_info() {
    std::cout << "nama kendaraan: " << nama << std::endl;
    std::cout << "laju kecepatan: " << kecepatan << std::endl;
  }

  virtual void klason() {
    std::cout << "kendaraan mengeluarkan klason " << std::endl;
  }
};

class Mobil : public Kendaraan {
private:
  int kursi;

public:
  Mobil(std::string n, int k, int jumlah_kursi)
      : Kendaraan(n, k), kursi(jumlah_kursi) {}

  void display_info() {
    std::cout << "jumlah kursi pada mobil: " << kursi << std::endl;
  }

  void klason() override {
    std::cout << "kendaraan tidak mengeluarkan klason" << std::endl;
  }
};

int main() {
  Kendaraan kendaraan("mobil mewah", 150);
  kendaraan.display_info();
  kendaraan.klason();

  Mobil mobil("mobil truck", 80, 2);
  // menggunakan pointer namun
  // jumlah kursi tidak akan muncul dikarenakan private
  Kendaraan *kendaraan_pointer = &mobil;
  kendaraan_pointer->display_info();
  kendaraan_pointer->klason();

  // jika tidak menggunakan pointer
  mobil.display_info();
  mobil.klason();

  return 0;
}
