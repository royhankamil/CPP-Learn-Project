#include <iostream>

using namespace std;

int main()
{   int desimal,biner, hasil;
    cout << "kalkulator desimal ke biner" << endl;
    cout<<"masukkan angka desimal: ";
    cin>>desimal;
     while (desimal>=0){

        desimal=desimal%2;
        cout<<desimal;
    }
    return 0;
}
