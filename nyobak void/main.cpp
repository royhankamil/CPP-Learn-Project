#include <iostream>
using namespace std;
int tambah(int a,int b){
    int c;
    c=a+b;
    return c;
}
int kurang(int d,int e){
    int f;
    f=d-e;
    return f;
}
int kali(int g,int h){
    int i;
    i=g*h;
    return i;
}
int bagi(int j,int k){
    float l;
    l=j/k;
    return l;
}
int main(){
   while(true){
        system("color 2");
cout<<"pilih salah satu"<<endl;
    int pilih;
cout<<"pilih tambah (+) ketik 1\n";
cout<<"pilih kurang (-) ketik 2\n";
cout<<"pilih kali (x) ketik 3\n";
cout<<"pilih bagi (:)ketik 4\n";
cin>>pilih;
  if (pilih==1){
    int hasil, m, n;
    cout<<"ketik angka (penjmlahan): "<<endl;
    cin>>m;
    cout<<"ditambah dengan :"<<endl;
    cin>>n;
    hasil=tambah (m, n);
    cout<<"sama dengan "<<hasil<<endl;

}
 else if (pilih==2){
     int hasil2, o, p;
     cout<<"ketik angka (pengurangan): "<<endl;
     cin>>o;
     cout<<"dikurang dengan: \n";
     cin>>p;
     hasil2=kurang (o, p);
     cout<<"sama dengan "<<hasil2<<endl;
 }
 else if (pilih==3){
     int hasil3, q, r;
     cout<<"ketik angka (perkalian): \n";
     cin>>q;
     cout<<"dikali dengan: \n";
     cin>>r;
     hasil3=kali(q, r);
     cout<<"sama dengan "<<hasil3<<endl;
 }
 else if (pilih==4){
     int hasil4,s, t;
     cout<<"ketik angka (pembagian): \n";
     cin>>s;
     cout<<"dibagi dengan: \n";
     cin>>t;
     hasil4=bagi(s, t);
     cout<<"sama dengan "<<hasil4<<endl;
 }
 else{cout<<"anda tidak mengetik 1,2,3,atau 4\n";
 cout<<" pilihlah salah satu"<<endl;
 continue;
 }

 char z;
 cout<<"lagi?(y/t) "<<endl;
 cin>>z;
 if (z=='t'){
     break;
 }else if (z=='y'){continue;}
 else {cout<<"anda tidak mengetik y/t\n";
 cout<<"y=ya,t=tidak"<<endl;
     break;
 }
}
    return 0;
}
