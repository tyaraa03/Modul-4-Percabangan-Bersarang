#include <iostream>
#include <string>
using namespace std;

int main() {
    string tujuan;
    float berat;
    int ongkir;

    cout << "Masukkan tujuan (Jawa/Luar Jawa): ";
    getline(cin, tujuan);

    cout << "Masukkan berat barang (kg): ";
    cin >> berat;

    if (tujuan == "Jawa" || tujuan == "jawa") {
        if (berat > 5) {
            ongkir = 50000;
        } else {
            ongkir = 20000;
        }
    } else if (tujuan == "Luar Jawa" || tujuan == "luar jawa") {
        if (berat > 5) {
            ongkir = 100000;
        } else {
            ongkir = 50000;
        }
    } else {
        cout << "Tujuan tidak valid." << endl;
        return 0;
    }

    cout << "Ongkos kirim: Rp" << ongkir << endl;
    
    return 0;
}

