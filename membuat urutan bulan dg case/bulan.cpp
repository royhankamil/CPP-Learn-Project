#include <iostream>

using namespace std;

int main()
{short bulan;
    cout << "masukkan angka bulan (1-12): ";
    cin>>bulan;
    switch (bulan){
case 1:
    cout<<"bulan januari";
    break;
case 2:
    cout<<"bulan february";
    break;
case 3:
    cout<<"bulan maret";
    break;
case 4:
    cout<<"bulan april";
   break;
case 5:
    cout<<"bulan mei";
    break;
case 6:
    cout<<"bulan juni";
    break;
case 7:
    cout<<"bulan juli";
    break;
case 8:
    cout<<"bulan agustus";
    break;
case 9:
    cout<<"bulan september";
    break;
case 10:
    cout<<"bulan oktober";
    break;
case 11:
    cout<<"bulan november";
    break;
case 12:
    cout<<"bulan desember";
    break;
default:

    cout<<"salah input";
    break;
    }
    return 0;
}
