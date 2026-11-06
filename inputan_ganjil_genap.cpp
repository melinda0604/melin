#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "Angka " << angka << " adalah GENAP";
    }
    else {
        cout << "Angka " << angka << " adalah GANJIL";
    }

    return 0;
}
