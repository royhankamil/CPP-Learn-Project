#include <iostream>

using namespace std;

int main()
{int angka;
    cout<<"menyebutkan angka"<<endl;
    cout << "Masukkan Angka (Angka 1-3): ";
    cin>>angka;
    if (angka==1){cout<<"Angka Satu"<<endl;}
    else if (angka==2){cout<<"Angka Dua"<<endl;}
    else if (angka==3){cout<<"Angka Tiga"<<endl;}
    else {cout<<"Bukan Angka Satu Sampai Tiga"<<endl;}
    cout<<"masukkan angka nilai: ";
    cin>>angka;
    if (angka>=91 && angka <=100){cout <<"A"<<endl;}
    else if (angka>=81 && angka <=90){cout<<"B"<<endl;}
    else if (angka >=71 && angka <=80){cout<<"C"<<endl;}
    else if (angka >=61 && angka <=80){cout<<"D"<<endl;}
    else if (angka >=0 && angka <=60) {cout<<"E"<<endl;}
    else {cout<<"kesalahan input"<<endl;}
    return 0;
}
