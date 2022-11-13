#include <iostream>
using namespace std;

int main (){
    int total;
    int kode, jumlah;
    char ukuran;

    cout << "Masukkan kode susu (1-3): ";
    cin >> kode;

    if (kode==1){
        cout << "===Dancow===" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> jumlah;
            total = jumlah * 10000;
            cout << "Jumlah pembeliannya: Rp" << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian: ";
            cin >> jumlah;
            total = jumlah * 4250;
            cout << "Jumlah pembeliannya : Rp" << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian: ";
            cin >> jumlah;
            total = jumlah * 2100;
            cout << "Jumlah pembeliannya: Rp" << total << endl;
        }
    }else if (kode==2){
        cout << "===Indomilk===" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian: ";
            cin >> jumlah;
            total = jumlah* 8500;
            cout << "Jumlah pembeliannya: Rp" << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian: ";
            cin >> jumlah;
            total = jumlah * 4000;
            cout << "Jumlah pembeliannya: Rp" << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian: ";
            cin >> jumlah;
            total = jumlah * 2025;
            cout << "Jumlah pembeliannya: Rp" << total << endl;
        }
    }else if (kode==3){
        cout << "===Sustacal===" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian: ";
            cin >> jumlah;
            total = jumlah * 17000;
            cout << "Jumlah pembeliannya: Rp" << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian: ";
            cin >> jumlah;
            total = jumlah * 14500;
            cout << "Jumlah pembeliannya: Rp" << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian: ";
            cin >> jumlah;
            total = jumlah * 8300;
            cout << "Jumlah pembeliannya: Rp" << total << endl;
        }
    }

    return 0;
}
