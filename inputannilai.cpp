#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai > 90) {
        cout << "Predikat: A";
    }
    else if (nilai > 80) {
        cout << "Predikat: B";
    }
    else if (nilai > 70) {
        cout << "Predikat: C";
    }
    else {
        cout << "Predikat: D";
    }

    return 0;
}
