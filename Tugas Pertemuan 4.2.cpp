#include <iostream>
using namespace std;

int main() {
    string u;
    string p;

    cout << "Input username: ";
    cin >> u;
    cout << "Input password: ";
    cin >> p;
    cout<<endl;

    if (u == "Adm1n" && p == "Tugas4Alpro"){
        cout << "=============================================" <<endl;
        cout << "Username dan password sesuai. Login berhasil!" <<endl;
        cout << "=============================================" <<endl;
    }else if (u != "Adm1n" && p == "Tugas4Alpro"){
        cout << "=======================================" <<endl;
        cout << "Username tidak sesuai, password sesuai." <<endl;
        cout << "=======================================" <<endl;
    }else if (u == "Adm1n" && p != "Tugas4Alpro"){
        cout << "=======================================" <<endl;
        cout << "Username sesuai, password tidak sesuai." <<endl;
        cout << "=======================================" <<endl;
    }else if (u != "Adm1n" && p != "Tugas4Alpro"){
        cout << "==========================================================" <<endl;
        cout << "Username tidak sesuai, password tidak sesuai. Login gagal!" <<endl;
        cout << "==========================================================" <<endl;
    }


return 0;
}
