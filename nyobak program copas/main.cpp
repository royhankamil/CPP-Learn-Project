#include <iostream>
using namespace std;
void pengurutan();
void pencarian();
int angka[8]={7,33,48,21,30,22,43,53};
int main()
{
 short pilih;
 cout<<"HASIL SEMUA DATA"<<endl;
 for(int a=0;a<8;a++)
 cout<<"   "<<angka[a];
 cout<<endl;
 cout<<"ingin ke pengurutan atau pencarian"<<endl;
 cout<<"ketik '1' untuk pengurutan"<<endl;
 cout<<"ketik '2' untuk pencarian: ";
 cin>>pilih;
 if (pilih==1)
 pengurutan();
 else if (pilih==2)
 pencarian();
 else
 cout<<"HARAP MASUKKAN ANGKA 1-2!!!!"<<endl;
}
void pengurutan()
{
 int temp;
 cout<<endl<<endl;
 for(int b=0;b<7;b++)
 {
  for(int c=0;c<7;c++)
  {
   if (angka[c]>=angka[c+1])
   {
    temp=angka[c];
    angka[c]=angka[c+1];
    angka[c+1]=temp;
   }
  }
 }
 cout<<"SEMUA DATA SETELAH DIURUTKAN"<<endl;
 for(int d=0;d<8;d++)
 cout<<"   "<<angka[d];
 cout<<endl;
}
void pencarian()
{
 int posisi,b=0,c;
 cout<<endl<<endl;
    cout<<"DATA YANG INGIN DICARI: "<<endl;
    cin>>c;
    while (b<7&& angka[b]!=c)
 b++;
 if (angka[b]!=c)
 cout<<"DATA ANDA TIDAK DITEMUKAN"<<endl;
 else if (angka[b]==c)
 {
  posisi=b+1;
  cout<<"DITEMUKAN PADA POSISI: "<<posisi<<endl;
 }
}
