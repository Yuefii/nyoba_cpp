#include <iostream>
#include <string>

// mengapa pointer to class ini diperlukan?
// 1. dynamic memory allocation
// 2. efisiensi
// 3. polimorfisme

class Mobil {
public:
  std::string merk_mobil;
  int tahun_keluaran;

  void display_info() {
    std::cout << "merk mobil: " << merk_mobil << std::endl; 
    std::cout << "tahun keluar: " << tahun_keluaran << std::endl;
  }
};

class Chat {
public:
  virtual void message() {
      std::cout << "halo, semangat kamu menjalani aktifitas hari ini." << std::endl;
  }
};

class Send : public Chat {
public:
  // jadi message pada class chat akan dioverride/diubah menggunakan message ini
  void message() override {
  std::cout << "Karena cuaca hari ini sangat panas." << std::endl;
  }
};

int main() {
  Mobil *mobil_pointer = new Mobil[2];
  mobil_pointer[0].merk_mobil = "BMW";
  mobil_pointer[0].tahun_keluaran = 2001;
  mobil_pointer[1].merk_mobil = "Ferari";
  mobil_pointer[1].tahun_keluaran = 2006;

  for (int i =0; i < 2; i++) {
    mobil_pointer[i].display_info();
  } 

  delete[] mobil_pointer;

  Chat *chat_pointer;
  Send send;

  chat_pointer = &send;

  chat_pointer->message();

  return 0;
}
