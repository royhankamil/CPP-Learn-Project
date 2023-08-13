#include <iostream>

using namespace std;

int main()
{  int angka;
    cout << "masukkan angka: ";
    cin>>angka;
    for (int a=1;a<=angka;a++){
        for(int b=1;b<=a;b++){
            cout<<b;
        }cout<<endl;
    }
    return 0;
}
