#include <iostream>
#include <string.h>
using namespace std;

int main()
{   string nama, kelas, alamat;
    cout << "Masukkan Identitas Anda" << endl;
    cout<<"nama  : ";
    getline(cin, nama);
    cout<<"kelas : ";
    getline(cin, kelas);
    cout<<"alamat: ";
    getline(cin, alamat);
    cout<<endl;
    cout<<"Hallow "<<nama<<endl;
    cout<<"kelas "<<kelas<<endl;
    cout<<alamat<<endl;
    return 0;
}
