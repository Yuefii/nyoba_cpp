#include <iostream>
#include <string>

// jenis modifikasi class
// 1. public
// 2. private
// 3. protected

class Data {
  // protected class
protected:
  std::string alamat;
  // private class
private:
  int umur;
  // public class
public:
  std::string nama;

  void set_umur(int u) { umur = u; }
  void set_alamat(std::string a) { alamat = a; }

  void display_info() {
    std::cout << "halo, selamat datang " << nama << std::endl;
    std::cout << "umur saya saat ini: " << umur << std::endl;
  }
};

class DataAlamat : public Data {
public:
  void display_alamat() {
    std::cout << "alamat saya saat ini berada di " << alamat << std::endl;
  }
};

class AccountBank {
private:
  double saldo;

protected:
  std::string nama;

public:
  AccountBank(std::string n, double s) {
    nama = n;
    saldo = s;
  }

  void deposit(double jumlah) {
    if (jumlah > 0) {
      saldo += jumlah;
      std::cout << "saldo berhasil ditambah" << std::endl;
    } else {
      std::cout << "jumlah saldo harus positif" << std::endl;
    }
  }

  void display_account_bank() {
    std::cout << "nama: " << nama << std::endl;
    std::cout << "saldo saat ini: Rp." << saldo << std::endl;
  }
};

int main() {
  Data data;
  data.nama = "Jhon Doe";
  data.set_umur(21);
  data.display_info();

  DataAlamat alamat;
  alamat.set_alamat("Jakarta");
  alamat.display_alamat();

  AccountBank account("Jhon Doe", 20000.00);
  account.display_account_bank();
  std::cout << "deposit bank" << std::endl;
  account.deposit(100000.00);
  account.display_account_bank();

  return 0;
}
