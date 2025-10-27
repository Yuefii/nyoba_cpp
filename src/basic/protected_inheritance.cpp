#include <iostream>
#include <string>

class Organisasi {
protected:
  std::string nama_organisasi;

public:
  Organisasi(std::string n_org) : nama_organisasi(n_org) {}

  void display_info() {
    std::cout << "nama organisasi: " << nama_organisasi << std::endl;
  }
};

class Departemen : protected Organisasi {
private:
  std::string nama_departemen;

public:
  Departemen(std::string n_org, std::string n_dep)
      : Organisasi(n_org), nama_departemen(n_dep) {}

  void display_info() {
    std::cout << "nama departemen: " << nama_departemen << std::endl;
  }

  void ganti_nama_org(std::string n_org) { nama_organisasi = n_org; }
};

int main() {
  Departemen dep("Ngodeyuk", "development");
  dep.display_info();

  // kita bisa mengganti nama organisasi
  // namun kita kita bisa menampilkan/mengaksesnya dari class departemen
  // karna aksesnya protected,
  // jadi kita tidak bisa mengakses diluar dari class tersebut
  dep.ganti_nama_org("Yuk Ngoding");
  dep.display_info();

  return 0;
}
