#include "iostream"
#include <cmath>
#include <iterator>
#include <string>

using namespace std;

// class tanpa constructor
class Polos {
public:
  string dataString;
  int dataInteger;
};

// class dengan constructor
class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

        // constructor adalah function yang dipanggil pertama kali ketika objek dibuat
        // constructor harus public sebagai key modifiernya
        // Mahasiswa() { 
           // cout << "Hello World" << endl; 
        // }
        
        // constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK) {
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;

            cout << "Nama mahasiswa adalah " << Mahasiswa::nama << endl;
            cout << "Nim mahasiswa adalah " << Mahasiswa::NIM << endl;
            cout << "Jurusan mahasiswa adalah " << Mahasiswa::jurusan << endl;
            cout << "IPK mahasiswa adalah " << Mahasiswa::IPK << endl;
            cout << endl;
        }
};

int main(int argc, char *argv[]) { 
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", "193847189", "Teknik Abal-Abal", 3.5);
    Mahasiswa mahasiswa2 = Mahasiswa("otong", "193847190", "Teknik Abal-Abal", 3.0);

}
