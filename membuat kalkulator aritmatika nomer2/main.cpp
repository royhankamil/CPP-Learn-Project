//Nama : Achmad Royhan Kamil
//tanggal: 10 september 2022
//project soal nomer 2 membuat kalkulator sederhana dengan fungsi
#include <iostream>
#include <conio.h>
using namespace std;
void selesai();//fungsi prototype
void input(float input1,float input2,short operation);//fungsi prototype
string Operasi[4]={"PENJUMLAHAN","PENGURANGAN","PERKALIAN","PEMBAGIAN"};//variabel global
void hiasan()//fungsi hiasan pembuka
{
  for (int a=1;a<=60;a++)
    {

     cout<<"*";
    }cout<<endl;
}
void pembuka (int angka)//fungsi pembuk
{
    system("cls");
   hiasan();
    cout<<"\t\tANDA MEMILIH OPERASI "<<Operasi[angka]<<endl;
    hiasan();
}
//fungsi penjumlahan
void penjumlahan(float tambah1,float tambah2)
{
    float hasil=tambah1+tambah2;
     cout<<"HASIL DARI PENJUMLAHAN "<<tambah1<<"+"<<tambah2<<" ADALAH : "<<hasil<<endl;
     system("color F");
}//fungsi pengurangan
void pengurangan(float kurang1,float kurang2)
{
    float hasil=kurang1-kurang2;
     cout<<"HASIL DARI PENGURANGAN "<<kurang1<<"-"<<kurang2<<" ADALAH : "<<hasil<<endl;
     system("color F");
}//fungsi perkalian
void perkalian(float kali1,float kali2)
{
    float hasil=kali1*kali2;
    cout<<"HASIL DARI PERKALIAN "<<kali1<<"×"<<kali2<<" ADALAH : "<<hasil<<endl;
    system("color F");
}//fungsi pembagian
void pembagian(float bagi1,float bagi2)
{
    float hasil=bagi1/bagi2;
    cout<<"HASIL DARI PEMBAGIAN "<<bagi1<<":"<<" ADALAH : "<<hasil<<endl;
    system("color F");
}//fungsi utama
int main()
{
    float angka1,angka2;
    short pilih;
    while (true)
    {//menu
    system ("color A");
      cout <<"MENU UTAMA"<< endl;
      cout<<"1. OPERASI PENJUMLAHAN"<<endl;
      cout<<"2. OPERASI PENGURANGAN"<<endl;
      cout<<"3. OPERASI PERKALIAN"<<endl;      cout<<"4. OPERASI PEMBAGIAN"<<endl;
      cout<<"5. KELUAR"<<endl;
      cout<<"MASUKKAN KODE [1,2,3,4,5]"<<endl;
      system("color F");
      cin>>pilih;
         switch (pilih)//switch case
         {
            case 1:
            input(angka1, angka2,1);
            break;
            case 2:
            input(angka1,angka2,2);
            break;
            case 3:
            input(angka1,angka2,3);
            break;
            case 4:
            input(angka1,angka2,4);
            break;
            case 5:
            selesai();
            break;
         default:
              system("CLS");
              system("color C");
              cout<<"dimohon untuk memilih angka 1-5"<<endl;
          }if (pilih==5)break;//keluar
        cout<<endl;
    }
    return 0;
}
void selesai()//selesai
{
 system("cls");
 hiasan();
 cout<<"\t\t\t TERIMA KASIH "<<endl;
 cout<<"\t\t\tTELAH  MENCOBA"<<endl;
    hiasan();
}//fungsi inputan
void input(float input1,float input2,short operation)
{
 pembuka(operation-1);
 cout<<"masukkan angka pertama: ";
 cin>>input1;
 cout<<"masukkan angka kedua: ";
 cin>>input2;
 system("color C");
 if (operation==1){penjumlahan(input1,input2);}//penjumlahan
 else if (operation==2){pengurangan(input1,input2);}//pengurangan
 else if (operation==3){perkalian(input1,  input2);}//perkalian
 else if (operation==4){pembagian(input1,input2);                            }//pembagian
    else cout<<"tidak masuk akal"<<endl;
}
