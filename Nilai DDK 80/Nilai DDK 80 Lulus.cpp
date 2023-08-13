#include <iostream>

using namespace std;

int main()
{
    int nilai;
    char lagi;
    do {cout<<"Masukkan Nilai: ";
    cin>>nilai;
    if (nilai >=0  && nilai <80){cout<<"Anda belum lulus"<<endl;}
    else if (nilai >= 80 && nilai <=100){cout<<"Anda Lulus"<<endl;}
    else {cout<<"Salah Input"<<endl;}
    cout << "mau diulangi lagi? ";
    cin>>lagi;
    }while (lagi=='y');
    return 0;
}
