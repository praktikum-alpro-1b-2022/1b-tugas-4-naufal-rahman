#include <iostream>
#include <string>
using namespace std;

int main () {
    int nomor;
    char answer;

    cout<<"        Menu Restaurant Mc'Yahud         "<<endl;
    cout<<"========================================="<<endl;
    cout<<"1. Nasi Goreng Informatika     Rp5.000,00"<<endl;
    cout<<"2. Nasi Soto Ayam internet     Rp7.000,00"<<endl;
    cout<<"3. Gado-gado Disket            Rp4.500,00"<<endl;
    cout<<"4. Bubur Ayam LAN              Rp4.000,00"<<endl;
    cout<<"========================================="<<endl;

    cout <<endl;
    cout << "Masukan pilihan Anda... : ";
    cin >> nomor;
    cout <<endl;

    switch (nomor){
	case 1:
        cout << "Pilihan No. 1 Nasi Goreng Informatika Rp5.000,00";
        cout<<endl;
    break;
    case 2:
        cout << "Pilihan No. 2 Nasi Soto Ayam Internet Rp7.000,00";
        cout<<endl;
    break;
    case 3:
        cout << "Pilihan No. 3 Gado-gado Disket Rp4.500,00";
        cout<<endl;
    break;
    case 4:
        cout << "Pilihan No. 4 Bubur Ayam LAN Rp4.000,00";
        cout<<endl;
    break;
    default:
    break;

    }

    return 0;

}
