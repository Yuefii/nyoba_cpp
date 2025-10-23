#include <iostream>
#include <string>

// ciri dari destructor yaitu:
// 1. nama destructor sama dengan nama class tapi diawali dengan ~
// 2. tidak memiliki parameter atau return type
// 3. dipanggil otomatis saat object itu dihancurkan

class ArrayDinamis {
private:
  int *array;
  int ukuran;

public:
  ArrayDinamis(int u) {
    ukuran = u;
    array = new int[ukuran];
    std::cout << "array dengan ukuran " << ukuran << " dialokasikan"
              << std::endl;
  }

  ~ArrayDinamis() {
    delete[] array;
    std::cout << "memori dari array sudah dibebaskan" << std::endl;
  }
};

int main() {
  ArrayDinamis array(100);

  return 0;
}
