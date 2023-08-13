#include <iostream>

using namespace std;

int main()
{int angka;
	float jari, luas, sisi, panjang, lebar,volume, tinggi;
	char lagi;
do {cout<<"------------menghitung bangun ruang dan datar---------"<<endl;
cout<<"masukkan angka: "<<endl;
cout<<"ketik angka 1 untuk menghitung bangun datar"<<endl;
cout<<"ketik angka 2 untuk menghitung bangun ruang: ";
cin>>angka;
cout<<endl;
if (angka==1) {
cout<<"menghitung bangun datar"<<endl;
cout<<"masukkan angka "<<endl;
cout<<"angka 1 untuk menghitung luas lingkaran"<<endl;
cout<<"angka 2 untuk menghitung luas persegi"<<endl;
cout<<"angka 3 untuk menghitung luas persegi panjang: ";
cin>>angka;
cout<<endl;
if (angka ==1) {
cout<<"menghitung luas lingkaran"<<endl;
cout<<"masukkan jari jari: ";
cin>>jari;
luas=3.14*jari*jari;
}else if (angka==2) {
cout<<"menghitung luas persegi"<<endl;
cout<<"masukkan panjang sisi : ";
cin>>sisi;
luas=sisi*sisi;} else if (angka==3) {
cout<<"menghitung luas persegi panjang"<<endl;
cout<<"masukkan panjang : ";
cin>>panjang;
cout<<"masukkan lebar: ";
cin>>lebar;
luas=panjang*lebar;}
else {cout<<"salah input"<<endl;}
cout<<"luas bangun datar adalah: "<<luas<<endl<<endl;
}else if (angka==2){
	cout<<"menghitung bangun volume ruang"<<endl;
	cout<<"masukkan angka untuk memilih: "<<endl;
	cout<<"angka 1 untuk menghitung volume  bola"<<endl;
	cout<<"angka 2 untuk menghitung volume kubus"<<endl;
	cout<<"angka 3 untuk menghitung volume balok  ";
	cin>>angka;
	cout<<endl;
	if (angka==1){
		cout<<"menghitung volume bola"<<endl;
		cout<<"masukkan jari jari: ";
		cin>>jari;
		volume=1.333333*3.14*jari*jari;
		}else if (angka==2){
			cout<<"menghitung volume kubus"<<endl;
			cout<<"masukkan sisi: ";
			cin>>sisi;
			volume=sisi*sisi*sisi;
			}else if (angka==3){
				cout<<"menghitung volume balok"<<endl;
				cout<<"masukkan panjang: "<<endl;
				cin>>panjang;
				cout<<"masukkan lebar: "<<endl;
				cin>>lebar;
				cout<<"masukkan tinggi: "<<endl;
				cin>>tinggi;
				volume=panjang*lebar*tinggi;}
				else {cout<<"salah input"<<endl;}
				cout<<"Besar volume bangun ruang adalah: "<<volume<<endl<<endl;

	} else {cout<<"salah input"<<endl;}
	cout<<"ingin lagi  "<<endl;
	cout<<"ketik 'y' jika iya: ";
	cin>>lagi;}
	while (lagi=='y');
cout<<"terima kasih"<<endl;
    return 0;
}
