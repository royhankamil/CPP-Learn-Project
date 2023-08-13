#include <iostream>

using namespace std;

int main()
{
    int angka;
    float luas, jari2, sisi, panjang, lebar;
   cout<<"pilih bangun datar"<<endl;
   cout<<"*angka 1 untuk luas lingkaran"<<endl;
   cout<<"*angka 2 untuk luas persegi"<<endl;
   cout<<"*angka 3 untuk luas persegi panjang"<<endl;
   cin>>angka;
   if (angka==1){
    cout<<"masukkan jari jari: ";
    cin>>jari2;
    luas=3.14*jari2*jari2;
   } else if (angka==2){
   cout<<"masukkan sisi: ";
   cin>>sisi;
   luas=sisi*sisi;
   }else if (angka==3){
   cout<<"masukkan panjang: ";
   cin>>panjang;
   cout<<"masukkan lebar: ";
   cin>>lebar;
   luas=panjang*lebar;
   }else {
       cout<<"salah input"<<endl;
       }
   cout<<"luas bangun datar tersebut yakni: "<<luas<<endl;

    return 0;
}
