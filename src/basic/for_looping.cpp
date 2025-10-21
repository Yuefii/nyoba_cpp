#include <iostream>

// 1. inisialisasi data
// 2. periksa kondisi:
//    - jika true, maka jalankan statement kode
//    - jika false, maka keluar dari looping (perulangan)
// 3. eksekusi pembaruan dan ulangi langkah kedua

// 1. struktur kode jadi lebih rapih -> berada dalam satu baris
// 2. efisiensi -> jumlah langkah sudah diketahui
// 3. mudah dipahami

int main() {
  for (int i = 1; i <= 10; i++) {
    std::cout << "urutan angka: " << i << std::endl;
  }

  int jumlah = 0;
  for (int i = 1; i <= 10; i++) {
    jumlah += i;
    std::cout << "INFO: " << jumlah << std::endl;
  }
  std::cout << "jumlah: " << jumlah << std::endl;

  int nilai = 5;
  for (int i = 1; i <= nilai; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "* ";
    }
    std::cout << std::endl;
  }

  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      continue;
    }

    if (i == 9) {
      break;
    }

    std::cout << i << " " << std::endl;
  }

  return 0;
}
