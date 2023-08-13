#include <iostream>

using namespace std;

int main()
{
 string A,B,C;
cout<<"masukkan isi gelas A: ";
cin>>A;
	cout<<"masukkan isi gelas B: ";
	cin>>B;
	cout<<endl;
	cout<<"gelas awal: "<<endl;
	cout<<"gelas A berisi: "<<A<<endl;
	cout<<"gelas B berisi: "<<B<<endl<<endl;
	C=A;
	A=B;
	B=C;
	cout<<"sekarang gelas tersebut berubah"<<endl;
	cout<<"gelas A menjadi "<<A<<endl;
	cout <<"(yang awalnya "<<B<<")"<<endl;
	cout<<"gelas B menjadi "<<B<<endl;
	cout<<"(yang awalnya "<<A<<")"<<endl;
    return 0;
    return 0;
}
