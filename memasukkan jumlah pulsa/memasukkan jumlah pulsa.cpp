#include <iostream>

using namespace std;

int main()
{int jumlah_pesan;
char kirim_pesan;
	cout<<"masukkan jumlah pesan: ";
	cin>>jumlah_pesan;cout<<"mau kirim pesan(y/t): ";
	cin>>kirim_pesan;
	if (jumlah_pesan>=1000){
		do {	jumlah_pesan=jumlah_pesan-1000;
		cout<<jumlah_pesan<<endl;
		cout<<"mau kirim pesan(y/t): ";
	cin>>kirim_pesan;
	if (jumlah_pesan <1000){
		cout<<"maaf pulsa anda tidak mencukupi"<<endl;
		break;}} while (kirim_pesan=='y');}
	else {cout<<"maaf pulsa anda tidak mencukupi"<<endl;}
    return 0;
}
