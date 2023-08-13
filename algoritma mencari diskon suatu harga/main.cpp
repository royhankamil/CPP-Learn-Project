#include <iostream>

using namespace std;

int main()
{
    float harga, diskon,besar_diskon, bayar;
    cout<<"masukkan harga barang: ";
    cin>>harga;
    cout<<"masukkan diskon barang (tanpa persen): ";
    cin>>diskon;
    besar_diskon=harga*diskon/100;
    bayar=harga-besar_diskon;
    cout<<"total pembayaran adalah: "<<bayar<<endl;
    cout<<"diskon: "<<diskon<<"%"<<endl;
    return 0;
}
