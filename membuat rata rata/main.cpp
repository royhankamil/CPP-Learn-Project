#include <iostream>

using namespace std;

int main()
{   int x, pencacah=1, nilai=1;
    cout << "Hallo bang" << endl;
    cout<<"masukkan bilangan terakhir";
    cin>>x;
    while (nilai<=x) {
        cout<<nilai<<" ";
        nilai=nilai+pencacah;
        pencacah=pencacah+1;
    }cout<<"\n";
    return 0;
}
