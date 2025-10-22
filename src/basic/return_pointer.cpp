#include <iostream>

// kenapa harus menggunakan return pointer?
// 1. mengakses data yang dibuat dalam fungsi
// 2. mengelola memori dinamis
// 3. efisiensi
//
// tipe data yang bisa dikembalikan sebagai pointer
// 1. memori lokal (tidak disarankan)
// 2. memori dinamis -> (new)
// 3. memori global atau statis

int *buat_array(int ukuran) {
  int *array = new int[ukuran];
  for (int i = 0; i < ukuran; ++i) {
    array[i] = i + 1;
  }
  return array;
}

int *return_static_pointer() {
  static int x = 333;
  return &x;
}

struct Point {
  int x, y;
};

Point *buat_point(int a, int b) {
  Point *p = new Point;
  p->x = a;
  p->y = b;
  return p;
}

int main() {
  int ukuran = 10;
  int *data_array = buat_array(ukuran);

  std::cout << "array yang dibuat oleh fungsi buat array" << std::endl;

  for (int i = 0; i < ukuran; ++i) {
    std::cout << data_array[i] << " ";
  }
  std::cout << std::endl;
  delete[] data_array;

  std::cout << "==========================" << std::endl;

  int *pointer = return_static_pointer();
  std::cout << "nilainya adalah " << *pointer << std::endl;

  std::cout << "==========================" << std::endl;

  Point *p = buat_point(10, 100);
  std::cout << "Point: (" << p->x << ", " << p->y << ")" << std::endl;
  delete p;

  return 0;
}
