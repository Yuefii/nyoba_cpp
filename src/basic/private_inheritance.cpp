#include <iostream>
#include <string>

class Mesin {
private:
  int tenaga_mesin;

protected:
  std::string jenis_bahan_bakar;

public:
  Mesin(int tm, std::string jbk) : tenaga_mesin(tm), jenis_bahan_bakar(jbk) {}

  void display_info_mesin() {
    std::cout << "tenaga mesin: " << tenaga_mesin << std::endl;
    std::cout << "jenis bahan bakar: " << jenis_bahan_bakar << std::endl;
  }
};

class Mobil : private Mesin {
private:
  std::string nama_mobil;
  std::string nama_perusahaan;

public:
  Mobil(std::string nm, std::string np, int tm, std::string jbk)
      : Mesin(tm, jbk), nama_mobil(nm), nama_perusahaan(np) {}

  void display_info_mobil() {
    std::cout << "nama mobil: " << nama_mobil << std::endl;
    std::cout << "nama perusahaan: " << nama_perusahaan << std::endl;
    display_info_mesin();
  }

  void set_jenis_bahan_bakar(std::string jbk) { jenis_bahan_bakar = jbk; }
};

int main() {
  Mobil mobil("BMW M4", "BMW", 600, "pertamax");
  mobil.display_info_mobil();

  mobil.set_jenis_bahan_bakar("pertamax turbo");
  mobil.display_info_mobil();

  return 0;
}
