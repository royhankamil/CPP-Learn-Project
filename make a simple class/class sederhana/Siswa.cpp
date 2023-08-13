#include <iostream>//isi dari methods atau function
#include <string>
#include "Siswa.hpp"// menyambungkan file header

Siswa::Siswa(const char* nama, double tugas, double ulangan, double ujian)//constructor untuk memudahkan menjadi lebih singkat
{
    this->nama=nama;//this yakni sama seperti Siswa::nama
    this->nilaiTugas=tugas;//this-> == Siswa::
    Siswa::nilaiUlangan=ulangan;
    Siswa::nilaiUjian=ujian;
}

void Siswa::display()//menampilkan isi data
{
    std::cout << std::endl;
    std::cout << "Nama Siswa    : " << this->nama << std::endl;//menggunakan this
    std::cout << "Nilai Tugas   : " << this->nilaiTugas << std::endl;
    std::cout << "Nilai Ulangan : " << Siswa::nilaiUlangan << std::endl;//menggunakan namespace
    std::cout << "Nilai Ujian   : " << Siswa::nilaiUjian << std::endl;
    std::cout << "Rata-rata     : " << Siswa::rataRata() << std::endl;//menghubungkan ke methods lain
    Siswa::kelulusan();//menghubungkan ke methods lain
    std::cout << std::endl;
}

int Siswa::rataRata()//menghitung rata rata
{
    return (nilaiTugas + nilaiUlangan + nilaiUjian) / 3;
}

void Siswa::kelulusan()
{
    //menggunakan dengan ternary operator = (operator)?true:false
    //(operator) == operator cpp misal 90 > 80
    //true == apabila hasilnya true maka outputnya
    //false == apabila hasilnya false maka outputnya
    rataRata() > 80 ? std::cout << "Lulus" : std::cout << "Tidak Lulus";
}
