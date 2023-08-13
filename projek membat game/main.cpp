//nama: Achmad Royhan Kamil
//tanggal:22 september 2022
//program:Membuat game tic tac toe
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
char tac[3][3]={ ' ',' ',' ',' ',' ',' ',' ',' ',' '};//variabel global
char tic[3][3]={'1','2','3','4','5','6','7','8','9'};
char pemain='X';//fungsi prototype
void tampilan();
void bermain();
void how();
void bermain_looping();
void credit();
void keluar();
char kemenangan()
{//pemain satu menang
//beberapa kemungkinan menang p1
     if (tac[0][0] == 'X' && tac[0][1] == 'X' && tac[0][2] == 'X' || tac[1][0] == 'X' && tac[1][1] == 'X' && tac[1][2] == 'X' || tac[2][0] == 'X' && tac[2][1] == 'X' && tac[2][2] == 'X' || tac[0][0] == 'X' && tac[1][0] == 'X' && tac[2][0] == 'X' || tac[0][1] == 'X' && tac[1][1] == 'X' && tac[2][1] == 'X' || tac[0][2] == 'X' && tac[1][2] == 'X' && tac[2][2] == 'X' || tac[0][0] == 'X' && tac[1][1] == 'X' && tac[2][2] == 'X' || tac[2][0] == 'X' && tac[1][1] == 'X' && tac[0][2] == 'X')
        return 'X';
//pemain dua menang
//beberapa kemungkinan p2 untuk menang
     else    if (tac[0][0] == 'O' && tac[0][1] == 'O' && tac[0][2] == 'O' || tac[1][0] == 'O' && tac[1][1] == 'O' && tac[1][2] == 'O' || tac[2][0] == 'O' && tac[2][1] == 'O' && tac[2][2] == 'O' || tac[0][0] == 'O' && tac[1][0] == 'O' && tac[2][0] == 'O' || tac[0][1] == 'O' && tac[1][1] == 'O' && tac[2][1] == 'O' || tac[0][2] == 'O' && tac[1][2] == 'O' && tac[2][2] == 'O' || tac[0][0] == 'O' && tac[1][1] == 'O' && tac[2][2] == 'O'|| tac[2][0] == 'O' && tac[1][1] == 'O' && tac[0][2] == 'O')
        return 'O';
        else if (tac[2][0]=='x')
        return 'x';
        else if(tac[0][0]!=' ' &&tac[0][1]!=' ' &&tac[0][2]!=' ' && tac[1][0]!=' ' &&tac[1][1]!=' ' &&tac[1][2]!=' ' &&tac[2][0]!=' ' &&tac[2][1]!=' ' &&tac[2][2]!=' ')
         return 'o';//seri
}
void input()//penginputan
{char a;
     cout<<"KLIK 'K' UNTUK KELUAR"<<endl;
     cout << "PILIH SESUAI URTAN BARIS DAN KOLOM: ";//memilih
     a=getch();//getch untuk input char tanpa enter
    cout<<endl;
    if (tac[0][0]==' '&&a == '1')
        tac[0][0]=pemain;
    else if (tac[0][1]==' '&&a=='2')
        tac[0][1] = pemain;
    else if (tac[0][2]==' '&&a=='3')
        tac[0][2] = pemain;
    else if (tac[1][0]==' '&&a=='4')
        tac[1][0] = pemain;
    else if (tac[1][1]==' '&&a=='5')
        tac[1][1] = pemain;
    else if (tac[1][2]==' '&&a=='6')
        tac[1][2] = pemain;
    else if (tac[2][0]==' '&&a=='7')
        tac[2][0] = pemain;
    else if (tac[2][1]==' '&&a=='8')
        tac[2][1] = pemain;
    else if (tac[2][2]==' '&&a=='9')
        tac[2][2] = pemain;
      else if (a=='k' || a=='K')
        tac[2][0] = 'x';
    else if (a!='1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
  {  cout<<"*PILIH ANGKA 1-9 DONG"<<endl;
  input();//fungsi rekursif
  }
  else
  {
   cout<<"PILIH ANGKA YANG KOSONG"<<endl;
   input();//fungsi rekursif
  }
}
void pemainlain()//pemain dua
{
    if(pemain=='X')
        pemain='O';//pergantian karakter pemain
        else
        pemain='X';
}
void gambar()//looping untuk menampilkan urut tic tac toe
{
    system("cls");
    for(short j=0;j<3;j++)
    {
        cout<<"_________________________________"<<endl<<endl<<"| ";
        for(short k=0;k<3;k++)
        cout<<tic[j][k]<<".  "<<tac[j][k]<<"   |  ";
        cout<<endl<<endl;

    };
     cout<<"__________________________________"<<endl;
}
void garisvertikal(short e=4, char var=' ')//default argumen
{//garis vertikal
    for(short d=0;d<e; d++)
    cout<<var<<endl;
}
void garis(short b=9, char outpt=' ')//default argumen
{
    for(short a=0;a<b; a++)
    cout<<outpt;
}
int main()//fungsi utama
{
      char masuk=0;
      while(true)
    {
      system("cls");//clearsrecreen
      tampilan();cout<<endl;
      garis();
      cout<<"KLIK ANGKA SESUAI YANG ANDA INGINKAN"<<endl;
      masuk=getch();//input char tanpa enter
      switch (masuk)
       {
        case '1':
        bermain();
        break;
        case '2':
        how();
        break;
        case '3':
        credit();
        break;
        case '4':
        keluar();
        break;
        default:
        garis();
        cout<<endl;
        cout<<"ANDA TIDAK MEMASUKKAN ANGKA 1-4"<<endl;
        garis();
        cout<<"HARAP MEMASUKKAN ANGKA 1-4!!!"<<endl;
        system("pause");
        break;
       }
    if (masuk=='4')
    break;
    }
 return 0;
}
void tampilan()//fungsi tampilan awal
{
   garisvertikal();//fungsi space kebawah
   garis();//fungsi garis jarak
   garis(30,'=');//fungsi hiasan
   cout<<endl;
   garis();
   garis(30,'*');
   cout<<endl<<endl;
   garis();
   cout<<"          PERMAINAN      "<<endl;
   garis();
   cout<<"         TIC TAC TOE"<<endl<<endl;
   garis();
   garis(30,'*');
   cout<<endl;
   garis();

garis(30,'=');
   cout<<endl<<endl;
   garis();
   cout<<"1. MULAI PERMAINAN"<<endl;
   garis();
   cout<<"2. CARA BERMAIN"<<endl;
   garis();
   cout<<"3. CREDIT"<<endl;
   garis();
   cout<<"4. KELUAR"<<endl;
}
void bermain()
{
    for (short j=0;j<3;j++)
    {
     for (short k=0;k<3;k++)
         tac[k][j]=' ';
    }
    system("cls");
    gambar();
    garisvertikal(3);
    garis(20,'=');cout<<endl;
    while (true)
   {
    garisvertikal(2);
    input();
    gambar();
    if (kemenangan() == 'X')
        {//pemain pertama menang
            garisvertikal();garis(30,'=');
            cout<<endl;
            cout << "Pemain Satu Menang'X'" << endl;
            garis(30,'=');garisvertikal();
            system("pause");
            break;
        }
        else if (kemenangan() == 'O')
        {//pemain kedua menang
            garisvertikal();garis(30,'=');
            cout<<endl;
            cout << "Pemain Dua Menang 'O'" << endl;
            garis(30,'=');garisvertikal();
            system("pause");
            break;
        }
        else if (kemenangan() == 'x')
        break;//keluar
        else if (kemenangan() =='o')
        {
        garisvertikal();garis(30,'=');
        cout<<endl;//seri
        cout<<"tidak ada yang menang atau seri"<<endl;
        garis(30,'=');garisvertikal();
        system("pause");
        break;//seri
        }
    pemainlain();//ganti pemain
   }
}
void how()//tutorial bermain
{
  system("cls");
  garisvertikal(5,' ');
  garis();
  cout<<"==---JADI GINI...---=="<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"===--CARA BERMAIN--==="<<endl<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"1 . KETIK ANGKA '1' UNTUK MEMULAI"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"2 . SETELAH ITU MULAI PILIH SALAH SATU KOTAK"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"3 . KETIK ANGKA '1' UNTUK BARIS SATU KOLOM SATU"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"4 . KETIK ANGKA '2' UNTUK BARIS SATU KOLOM DUA"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"5 . KETIK ANGKA '3' UNTUK BARIS SATU KOLOM DUA"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"6 . KETIK ANGKA '4' UNTUK BARIS DUA KOLOM SATU"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"7 . KETIK ANGKA '5' UNTUK BARIS DUA KOLOM DUA"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"8 . KETIK ANGKA '6' UNTUK BARIS DUA KOLOM TIGA"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"9 . KETIK ANGKA '7' UNTUK BARIS TIGA KOLOM SATU"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"10. KETIK ANGKA '8' UNTUK BARIS TIGA KOLOM DUA"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"11. KETIK ANGKA '9' UNTUK BARIS TIGA KOLOM TIGA"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"12. PILIH KOTAK HINGGA BERJEJERAN TIGA 'X' ATAU 'O' TERGANTUNG KARAKTER ANDA"<<endl;
  garis();
  cout.flush();
  Sleep(330);
  cout<<"13. BISA DIAGONAL/HORIZONTAL/VERTIKAL BERJEJERANNYA"<<endl;
cout<<endl<<endl;
  cout<<"TEKAN APA SAJA UNTUK KEMBALI"<<endl;
  system("pause");
}
void credit()//fungsi kredit
{
  system("cls");
  garisvertikal(3);
  garis();
  cout<<"PEMBUAT: ACHMAD ROYHAN KAMIL"<<endl;
  garis();
  cout<<"AND MY REFRENCE 'NVitanovic' YOUTUBE"<<endl;
  garis();
  cout<<"SPECIAL THANKS TO YOU ALL"<<endl;
  garis();
  cout<<"GURU DDK: BU DIAN RETNO"<<endl;
  garis();
  cout<<"TO ALL SUPPORT"<<endl;
  garis();
  cout<<"PEMBUAT: ACHMAD ROYHAN KAMIL"<<endl;
  garis();
  cout<<"ABSEN : 1"<<endl;
  garis();
  cout<<"KELAS: X RPL C"<<endl;
  garis();
  cout<<"TEKAN APA SAJA UNTUK KELUAR"<<endl;
  cout.flush();
  Sleep(400);garisvertikal(2,' ');
  cout.flush();
  Sleep(400);garisvertikal(2,' ');
  cout.flush();
  Sleep(400);garisvertikal(2,' ');
  cout.flush();
  Sleep(400);garisvertikal(1,' ');
  cout.flush();
  Sleep(400);garisvertikal(1,' ');
  cout.flush();
  Sleep(400);garisvertikal(1,' ');
  cout.flush();
  Sleep(400);garisvertikal(1,' ');
  cout.flush();
  Sleep(400);garisvertikal(1,' ');
  cout.flush();
  Sleep(1000);garisvertikal(4,' ');
  cout.flush();
  Sleep(1000);garisvertikal(4,' ');
  cout.flush();
  Sleep(1000);garisvertikal(4,' ');
  cout.flush();
  Sleep(1000);garisvertikal(4,' ');
  cout.flush();
  Sleep(1000);garisvertikal(4,' ');
  system("pause");
}
void keluar()//fungsi keluar
{
   system("cls");
    garisvertikal(3,' ');
    garis(8,' ');
    garis(30,'*');
    cout<<endl;
    garis(8,' ');
    garis(30,'=');
    garisvertikal(3,' ');
    garis();
    cout<<"TERIMA KASIH TELAH MENCOBA :)"<<endl<<endl<<endl;
    garis(8,' ');
    garis(30,'=');
    cout<<endl;
    garis(8,' ');
    garis(30,'*');
    cout<<endl;
}
