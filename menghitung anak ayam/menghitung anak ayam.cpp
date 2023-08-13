#include <iostream>
using namespace std;
int main()
{
	int anak_ayam;
	cout<<"masukkan anak ayam: ";
	cin>>anak_ayam;
	if (anak_ayam>0){
		do {
			anak_ayam=anak_ayam-1;
			cout<<"mati satu tinggal "<<anak_ayam<<endl;
		}while (anak_ayam>1);

		cout<<"mati satu tinggal induknya "<<endl;
		}
		else {cout<<"harus bilangan positif"<<endl;}
}
