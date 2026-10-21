#include <iostream>
using namespace std;

int main() {
    int suhu = 80;
    bool air_coolant = true;

    if (suhu > 70) {
        if (air_coolant == false) {
            cout << "Aman";
        } else {
            cout << "Bahaya Overheat";
        }
    }

    return 0;
}
