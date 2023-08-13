#include <iostream>

using namespace std;

int main()
{   int pilih;
    string nilai0,nilai1,nilai2,nilai3, a;


    cout << "masukkan kalimat ke-1: ";
    cin>>nilai1;
    cout<<"masukkan kalimat ke-2: ";
    cin>>nilai2;
    cout<<"masukkan kalimat ke-3: ";
    cin>>nilai3;
    cout <<"pilih nomer untuk dikeluarkan: ";
    cin>>pilih;
    string nilai [4] = {nilai0, nilai1, nilai2, nilai3};
    cout<<"kalimat yang anda pilih "<< nilai[pilih]<<endl;
    return 0;
}
