#include <iostream>

using namespace std;

int main()
{
    int angka;
    cout << "masukkan angka: ";
    cin>>angka;
    for (int a=1;a<=angka;a++){
        for(int b=angka;b>=a;b--){
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}
