#include <iostream>

using namespace std;

int main()
{
  cout << "###  C++ Cek Tahun Kabisat  ###" << endl;
  cout << "===============================" << endl;
  cout << endl;

  int tahun;

  cout << "Input tahun: ";
  cin >> tahun;

   if (tahun % 400 == 0) {
     cout << tahun << " adalah tahun kabisat.";
   }
   else if (tahun % 100 == 0) {
     cout << tahun << " bukan tahun kabisat.";
   }
   else if (tahun % 4 == 0) {
     cout << tahun << " adalah tahun kabisat.";
   }
   else {
     cout << tahun << " bukan tahun kabisat.";
   }

  cout << endl;
  return 0;
}
