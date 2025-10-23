#include <iostream>
#include <string>

class Mobil {
public:
  std::string merk_mobil;
  int tahun_keluaran;

  void display_info_mobil() {
    std::cout << "merk mobil: " << merk_mobil << std::endl;
    std::cout << "tahun keluaran: " << tahun_keluaran << std::endl;
  }
};

class Data {
private:
  std::string nama;

public:
  std::string alamat;
  int umur;

  void set_nama(std::string nama_baru) { nama = nama_baru; }
  void display_name() {
    std::cout << "nama kamu adalah " << nama << std::endl;
    std::cout << "alamat kamu saat ini: " << alamat << std::endl;
    std::cout << "kamu berumur: " << umur << " tahun" << std::endl;
  }
};

int main() {
  Mobil mobil_pertama, mobil_kedua;

  mobil_pertama.merk_mobil = "Mercedes‑Benz";
  mobil_pertama.tahun_keluaran = 1926;
  mobil_kedua.merk_mobil = "Alfa Romeo";
  mobil_kedua.tahun_keluaran = 1910;

  mobil_pertama.display_info_mobil();
  mobil_kedua.display_info_mobil();

  Data data;
  data.set_nama("Jhon Doe");
  data.alamat = "Jakarta";
  data.display_name();

  return 0;
}
