#include <iostream>
#include <stdlib.h>
using namespace std;
int pertambah(int a,int b){
    int c;
    c=a+b;
    return c;
}
int pengurang(int d,int e){
    int f;
    f=d-e;
    return f;
}
int perkali(int g,int h){
    float i;
    i=g*h;
    return i;
}
int pembagi(int j,int k){
    float l;
    l=j/k;
    return l;
} void munculkan(int a){cout<<"hasilnya sama dengan: "<<a<<endl;}
int main(){
   while(true){int pilih,hasil,nambah,kurang,kali,bagi,angka;
   char lagi;
   cout<<"cosole direset"<<endl;
 system("CLS");
   cout<<"-------------------------==program kalkulator==----------------------"<<endl;
   cout<<"masukkan angka pertama: ";
   cin>>angka;
cout<<"pilih salah satu"<<endl;
cout<<"pilih tambah (+) ketik 1\n";
cout<<"pilih kurang (-) ketik 2\n";
cout<<"pilih kali (x) ketik 3\n";
cout<<"pilih bagi (:)ketik 4\n";
cout<<"silahkan dipilih: ";
cin>>pilih;
  if (pilih==1){
   cout<<"(penjumlahan) ditambah dengan :"<<endl;
    cin>>nambah;
    hasil=pertambah (angka, nambah);
}
 else if (pilih==2){
     cout<<"(pengurangan) dikurang dengan: \n";
     cin>>kurang;
     hasil=pengurang (angka,kurang);
 }
 else if (pilih==3){
     cout<<"(perkalian) dikali dengan: \n";
     cin>>kali;
     hasil=perkali(angka, kali);
 }
 else if (pilih==4){
     cout<<"dibagi dengan: \n";
     cin>>bagi;
     hasil=pembagi(angka, bagi);
 }
 else{cout<<"anda tidak mengetik 1,2,3,atau 4\n";
 cout<<" pilihlah salah satu"<<endl;
 continue;
 }munculkan(hasil);
 cout<<"lagi?(y/t) "<<endl;
 cin>>lagi;
 if (lagi=='t'){
     break;
 }else if (lagi=='y'){continue;

}
 else {cout<<"anda tidak mengetik y/t\n";
 cout<<"y=ya,t=tidak"<<endl;
     break;
 }


}
    return 0;
}
