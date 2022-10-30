#include <iostream>
using namespace std;

int main() {
    int bilbul;
    cout << "Masukkan bilangan bulat: ";
    cin >> bilbul;
    if (bilbul > 0) {
        cout << "Anda memasukkan bilangan bulat positif: " << bilbul << endl;
    }else
    if (bilbul < 0){
            cout << "Anda memasukan bilangan bulat negatif: " << bilbul << endl;
    }else{
        cout << "Anda memasukan bilangan 0." << endl;
    }

return 0;
}
