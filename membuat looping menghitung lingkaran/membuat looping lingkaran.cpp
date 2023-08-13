#include <iostream>

using namespace std;

int main()
{
    float luas, jari2;
char lagi;
do{
cout<<"masukkan jari jari lingkaran: ";
cin>>jari2;
luas=3.14*jari2*jari2;
cout<<"luas lingkaran adalah "<<luas<<endl;
cout<<"ingin lagi? (masukkan 'y' jika ingin diulang): ";
cin>>lagi;} while (lagi=='y');
    return 0;
}
