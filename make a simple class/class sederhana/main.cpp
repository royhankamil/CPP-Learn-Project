#include <iostream>
#include <string>
#include "Siswa.hpp"//multi file dengan include

using namespace std;

int main()
{
    //data ke 1
    //di buat dengan --> Class Variable {struct data 1, struct data 2, struct data n}
    Siswa data1{"Achmad Royhan Kamil", 80.0, 80.0, 90.0};
    data1.display();

    //stack memory (penyimpanan memory 1 dimensi)
    Siswa data2 = Siswa{"Farhan Kebab", 75, 80, 80};
    data2.display();

    //menggunakan heap memory (penyimpanan memori 2 dimensi) dengan cara pointer
    Siswa* data3 = new Siswa{"Fahmi Indomie", 83.5, 77.9, 88.0};//harus menggunakan new
    (*data3).display();//dengan derefrence

    //menggunakan heap memory
    Siswa* data4 = new Siswa{"Fatar ariansyah", 87, 90, 94};
    data4->display();//dengan cara arrow operator (perubahan pointer ke refrense)
    //sering dipakai arrow operator

    ////data ketika tanpa constructor
    //Siswa data1;
    //data1.nama = "Achmad Royhan Kamil";
    //data1.nilaiTugas = 80.0;
    //data1.nilaiUlangan = 80.0;
    //data1.nilaiUjian = 90.0;

    return 0;
}
