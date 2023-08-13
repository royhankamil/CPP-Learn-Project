#include <iostream>

using namespace std;

int main()
{
    int jml_kertas,lembar, biaya;
    float diskon,bayar;
    cout << "jumlah fotocopy (lembar): ";
    cin>>jml_kertas;
    biaya=jml_kertas*750;
    cout<<"jumlah pembayaran yang harus dibayar: "<<biaya<<endl<<endl;

    cout<<"jumlah fotocopy dengan adanya diskon"<<endl;
    cout<<"berapa lembar fotocopy: ";
    cin>>lembar;
    if (lembar > 100 ){
        diskon=lembar*750*(10/100);
        bayar=lembar*750-diskon;
    } else {bayar=lembar*750;}

    cout<<"total pembayaran adalah: "<<bayar<<endl;
    cout<<"dengan diskon: "<<diskon<<endl;
    return 0;
}
