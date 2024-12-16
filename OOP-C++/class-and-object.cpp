#include "iostream"
#include <string>

using namespace std;
// buat class sebelum main function

class Mahasiswa {
  // public     -- Semua bisa mengkases class tersebut
  // private    -- Hanya bisa diakses didalam class yang sama
  // protected  -- Hanya bisa diakses oleh class yang menginherit class tersebut

  // Membuat Atribut pada class
public:
  string nama;
  string NIM;
  string jurusan;
  double IPK;
};

int main() {
  // Membuat objek pada main function
  // Mamasiswa sebagai class yang dipanggil dan data 1 sebgai objek yang dibuat
  Mahasiswa data1;

  data1.nama = "Ucup";
  data1.NIM = "239840221";

  cout << "Nama dari mahasiswa 1 adalah: " << data1.nama << endl;
  cout << "NIM dari mahasiswa 1 adalah: " << data1.NIM << endl;
  cout << "Jurusan dari mahasiswa 1 adalah: " << data1.jurusan << endl;

  return 0;
}
