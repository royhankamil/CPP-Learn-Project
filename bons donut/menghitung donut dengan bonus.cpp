#include <iostream>

using namespace std;

int main()
{ int beli,bonus=0,terima;
    cout << "jika membeli 10 donut anda akan mendapat 3 donut gratis" << endl;
    cout<<"berapa jumlah donut yang anda beli: ";
    cin>>beli;
    bonus=(beli/10)*3;
    terima=bonus+beli;
    cout<<"jumlah donut yang anda dapatkan adalah "<<terima<<endl;
    cout<<"dengan jumlah bonus "<<bonus<<endl;
    return 0;
}
