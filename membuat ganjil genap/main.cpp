#include <iostream>

using namespace std;
int main()
{
    int angka,lagi;
        cout<<"angka ganil atau genap"<<endl;
      do{cout<<"masukkan angka (maximal 9 digit angka): \n";
    cin>>angka;
    angka=angka % 2;
    if (angka==0){cout<<"angka genap"<<endl;}

    else {cout<<"angka ganjil"<<endl<<endl;}
     cout<<"apakah ingin lagi(y/t)? ";
     cin>>lagi;
} while (lagi=='y');
    return 0;


  return 0;
}
