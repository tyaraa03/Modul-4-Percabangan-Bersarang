#include <iostream>
#include <string>
using namespace std;

int main() {

    string hari;
    int umur;
	int harga = 40000;

    cout << "Masukkan hari (Weekend/Weekday): ";
    cin >> hari;

    if (hari == "Weekend" || hari == "weekend") {
        cout << "Masukkan umur: ";
        cin >> umur;
        
        if (umur < 12) {
            harga = harga + 10000;
        } else {
            harga = harga + 20000;
        }
    } else if (hari == "Weekday" || hari == "weekday") {
        harga = 40000;
    } else {
        cout << "Hari tidak valid." << endl;
        return 0;
    }
    cout << "Harga tiket: Rp" << harga << endl;
    return 0;
}

