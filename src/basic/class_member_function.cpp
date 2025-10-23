#include <iostream>
#include <string>

// 1. deklarasi
//    - member function dideklarasikan di dalam definisi
//    - bisa dideklarasikan dibagian modifikasi akses -> public, privated,
//    protected
// 2. definisi -> inline function :: <- scope resolution
// 3. aksebilitas

// jenis class member function :
// 1. inline
// 2. outline
// 3. static member function
// 4. const member function
// 5. friend function

class Mobil {
public:
  std::string merk_mobil;
  int tahun_keluaran;

  // inline member function
  void display_info() {
    // example use this
    std::cout << "merk mobil: " << this->merk_mobil << std::endl;
  }

  void display_tahun_keluaran();
};

// outline member function
void Mobil::display_tahun_keluaran() {
  std::cout << "tahun keluaran: " << tahun_keluaran << std::endl;
}

// static member function
class Hitung {
private:
  static int hitung_nilai;

public:
  static void tambahkan() { hitung_nilai++; }

  static void display_hitung() {
    std::cout << "hitung: " << hitung_nilai << std::endl;
  }
};

int Hitung::hitung_nilai = 0;

class Siswa {
private:
  std::string nama, alamat;

public:
  // inline
  Siswa(std::string n, std::string a) : nama(n), alamat(a) {}

  // const member function
  void display_info() const {
    std::cout << "nama saya: " << nama << std::endl;
    std::cout << "alamat saya: " << alamat << std::endl;
  }
};

class Persegi {
private:
  double panjang;
  double lebar;

public:
  // inline
  Persegi(double p, double l) : panjang(p), lebar(l) {}

  // friend member function
  friend void display_info(const Persegi &p);
};

void display_info(const Persegi &p) {
  std::cout << "panjang persegi adalah " << p.panjang << std::endl;
  std::cout << "lebar persegi adalah " << p.lebar << std::endl;
}

int main() {
  Mobil mobil;
  mobil.merk_mobil = "BMW";
  mobil.tahun_keluaran = 2001;
  mobil.display_info();
  mobil.display_tahun_keluaran();

  Hitung::tambahkan();
  Hitung::display_hitung();
  Hitung::tambahkan();
  Hitung::display_hitung();

  const Siswa siswa("Jhon Doe", "Jakarta");
  siswa.display_info();

  Persegi persegi(20.55, 10.11);
  display_info(persegi);
}
