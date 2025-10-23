#include <iostream>

// 1. static member function hanya terkait dengan kelas itu sendiri
// 2. fungsi ini tidak memiliki akses ke anggota data non static
// 3. static member function hanya mengakses data atau fungsi anggota yang juga
// dideklarasi dengan metode static

// ciri - ciri dari static member function:
// 1. dapat dipanggil tanpa membuat object
// 2. tidak menggunakan pointer this
// 3. hanya akses anggota static

class HitungObject {
private:
  static int hitung_object;

public:
  HitungObject() { ++hitung_object; }

  ~HitungObject() { --hitung_object; }

  static int set_hitung_object() { return hitung_object; }
};

int HitungObject::hitung_object = 0;

int main() {
  std::cout << "hitung object saat ini: " << HitungObject::set_hitung_object()
            << std::endl;

  HitungObject object_satu, object_dua;
  std::cout << "jumlah object setelah dibuat adalah "
            << HitungObject::set_hitung_object() << std::endl;

  {
    HitungObject object_ketiga;
    std::cout << "jumlah object setelah dibuat adalah "
              << HitungObject::set_hitung_object() << std::endl;
  }

  std::cout << "jumlah object sekarang adalah "
            << HitungObject::set_hitung_object() << std::endl;

  return 0;
}
