#include <string>// header file berisi class

#ifndef __Siswa //ifndef digunakan agar tidak didefinisikan dua kali ifndef = jika tidak terdefinisi
#define __Siswa //didefinisikan siswa

class Siswa{ //class siswa untuk menyimpan struct(member) dan funtion(methods)
    private://(bisa diakses selain yang ada di class)
        std::string nama;//struct(member) data 1
        double nilaiTugas;//struct data 2
        double nilaiUlangan;//struct data 3
        double nilaiUjian;//struct data 4

    public:
        Siswa(const char*, double, double, double);//function/methods prototype
        void display();
        int rataRata();
        void kelulusan();
};
#endif//endif untuk mengakhiri


