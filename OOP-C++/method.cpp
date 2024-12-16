#include <string>
#include <iostream>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;

        Mahasiswa(string inputNama, string inputNIM) {
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
        }

        void displayData() {
            cout << "Nama   : " << Mahasiswa::nama << endl;
            cout << "NIM    : " << Mahasiswa::NIM << endl;
            cout << endl;
        }

        // terdapat 4 buah tipe method:
        // 1. Method tanpa parameter dan tanpa return
        // 2. Method dengan parameter dan tanpa return
        // 3. Method tanpa parameter dan dengan return
        // 4. Method dengan parameter dan dengan return
};

int main (int argc, char *argv[]) {
    Mahasiswa mahasiswa1 = Mahasiswa("Ucup", "32894783");

    mahasiswa1.displayData();

    return 0;
}
