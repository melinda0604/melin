
#include <iostream>
using namespace std;

// Fungsi pemesanan tiket
void pesanTiket() {
    int pilihan, jumlah;
    int harga;
    string tujuan;

    cout << "==================================" << endl;
    cout << "       PROGRAM TIKET BUS" << endl;
    cout << "==================================" << endl;

    cout << "1. Malang - Surabaya (Rp35000)" << endl;
    cout << "2. Malang - Pasuruan (Rp20000)" << endl;
    cout << "3. Malang - Jombang  (Rp25000)" << endl;

    cout << "\nPilih tujuan (1-3): ";
    cin >> pilihan;

    if (pilihan == 1) {
        tujuan = "Malang - Surabaya";
        harga = 35000;
    }
    else if (pilihan == 2) {
        tujuan = "Malang - Pasuruan";
        harga = 20000;
    }
    else if (pilihan == 3) {
        tujuan = "Malang - Jombang";
        harga = 25000;
    }
    else {
        cout << "Pilihan tidak tersedia!";
        return;
    }

    cout << "Jumlah penumpang: ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah penumpang tidak valid!";
        return;
    }

    int total = harga * jumlah;

    cout << "\n==================================" << endl;
    cout << "          STRUK TIKET BUS" << endl;
    cout << "==================================" << endl;

    cout << "Tujuan           : " << tujuan << endl;
    cout << "Harga tiket      : Rp" << harga << endl;
    cout << "Jumlah penumpang : " << jumlah << endl;
    cout << "Total pembayaran: Rp" << total << endl;

    cout << "==================================" << endl;
    cout << "Terima kasih telah memesan!" << endl;
}

int main() {
    pesanTiket();

    return 0;
}
