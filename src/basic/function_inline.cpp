#include <iostream>
#include <string>

// ciri-ciri inline function:
// 1. memiliki kata kunci inline
// 2. compiler akan mencoba mengganti panggil fungsi dengan isi dari fungsi
//    namun tidak akan selalu dilakukan jika:
//    - fungsi terlalu besar
//    - fungsi menggunakan fitur kompleks seperti rekursif

inline int tambah(int a, int b) { return a + b; }

class Hitung {
private:
  int nilai_satu, nilai_dua;

public:
  Hitung(int a, int b) : nilai_satu(a), nilai_dua(b) {}

  int perkalian() { return nilai_satu * nilai_dua; }
};

class Lingkaran {
private:
  double radius;

public:
  Lingkaran(double r) : radius(r) {}

  void set_radius(double r) { radius = r; }

  double kalkulasi_radius() const { return radius; }

  double kalkulasi() const {
    // p * r * r
    return 5.123 * radius * radius;
  }
};

int main() {
  int x = 10, y = 20;
  std::cout << "hasil dari " << x << " + " << y << " = " << tambah(x, y)
            << std::endl;

  Hitung hitung(x, y);
  std::cout << "hasil dari " << x << " + " << y << " = " << hitung.perkalian()
            << std::endl;

  Lingkaran l(10.5);
  std::cout << "nilai radius yang diketahui adalah " << l.kalkulasi_radius()
            << std::endl;
  std::cout << "hasilnya adalah " << l.kalkulasi() << std::endl;

  return 0;
}
