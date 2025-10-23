#include <iostream>

// karakteristik this pointer
// 1. otomatis ada
// 2. hanya tersedia dalam member function
// 3. menunjuk ke object saat ini
// 4. tidak bisa dimodifikasi
// 5. tidak tersedia dalam fungsi static

class Persegi {
private:
  int panjang, lebar;

public:
  Persegi &set_panjang(int p) {
    this->panjang = p;
    return *this;
  }
  Persegi &set_lebar(int l) {
    this->lebar = l;
    return *this;
  }

  void display_info() {
    std::cout << "hasil kalkulasi dari " << panjang << " * " << lebar << " = "
              << panjang * lebar << std::endl;
  }
};

class Alamat {
private:
  std::string alamat;

public:
  Alamat(std::string a) : alamat(a) {}

  bool cek_kesamaan(const Alamat &nilai_alamat) const {
    return (this == &nilai_alamat);
  }
};

class Nilai {
private:
  int nilai_satu, nilai_dua;

public:
  Nilai(int a, int b) : nilai_satu(a), nilai_dua(b) {}

  Nilai &operator+=(const Nilai &nilai_alamat) {
    this->nilai_satu += nilai_alamat.nilai_satu;
    this->nilai_dua += nilai_alamat.nilai_dua;

    return *this;
  }

  void display_info() {
    std::cout << "nilai a adalah " << nilai_satu << std::endl;
    std::cout << "nilai b adalah " << nilai_dua << std::endl;
  }
};

int main() {
  Persegi persegi;
  persegi.set_panjang(20).set_lebar(30).display_info();

  Alamat alamat("Jakarta");
  Alamat alamat_kedua("Tangerang");

  if (alamat.cek_kesamaan(alamat)) {
    std::cout << "alamat ini sama" << std::endl;
  }

  if (!alamat.cek_kesamaan(alamat_kedua)) {
    std::cout << "alamat kedua tidak sama dengan alamat pertama" << std::endl;
  }

  Nilai x(10, 10);
  Nilai y(20, 20);

  x += y;

  x.display_info();

  return 0;
}
