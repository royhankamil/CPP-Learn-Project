#include <iostream>

using namespace std;

int main()
{
	int x,y,i=1;
	cout<<"masukkan angka 'x': ";
	cin>>x;
	do {cout<<i<<endl;
	i=i+1;
		}while (i<=x);
		cout<<"mulai dari angka: ";
	  cin>>y;
	  cout<<"sampai angka: ";
		cin>>x;
		while (y<=x){
			cout<<y<<endl;
			y=y+1;
			}

    return 0;
}
