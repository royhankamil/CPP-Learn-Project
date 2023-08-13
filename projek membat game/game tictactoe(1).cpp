//nama: Achmad Royhan Kamil
//tanggal:
//program:Membuat game tic tac toe
#include <iostream>
#include <conio.h>
using namespace std;
char tac[3][3]={ '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char pemain='X';
void tampilan();
void bermain();
void how();
void credit();
void keluar();
char kemenangan()
{//pemain sat menang
     if (tac[0][0] == 'X' && tac[0][1] == 'X' && tac[0][2] == 'X')
        return 'X';
    if (tac[1][0] == 'X' && tac[1][1] == 'X' && tac[1][2] == 'X')
        return 'X';
    if (tac[2][0] == 'X' && tac[2][1] == 'X' && tac[2][2] == 'X')
        return 'X';

    if (tac[0][0] == 'X' && tac[1][0] == 'X' && tac[2][0] == 'X')
        return 'X';
    if (tac[0][1] == 'X' && tac[1][1] == 'X' && tac[2][1] == 'X')
        return 'X';
    if (tac[0][2] == 'X' && tac[1][2] == 'X' && tac[2][2] == 'X')
        return 'X';

    if (tac[0][0] == 'X' && tac[1][1] == 'X' && tac[2][2] == 'X')
        return 'X';
    if (tac[2][0] == 'X' && tac[1][1] == 'X' && tac[0][2] == 'X')
        return 'X';
//pemain dua menang
    if (tac[0][0] == 'O' && tac[0][1] == 'O' && tac[0][2] == 'O')
        return 'O';
    if (tac[1][0] == 'O' && tac[1][1] == 'O' && tac[1][2] == 'O')
        return 'O';
    if (tac[2][0] == 'O' && tac[2][1] == 'O' && tac[2][2] == 'O')
        return 'O';

    if (tac[0][0] == 'O' && tac[1][0] == 'O' && tac[2][0] == 'O')
        return 'O';
    if (tac[0][1] == 'O' && tac[1][1] == 'O' && tac[2][1] == 'O')
        return 'O';
    if (tac[0][2] == 'O' && tac[1][2] == 'O' && tac[2][2] == 'O')
        return 'O';

    if (tac[0][0] == 'O' && tac[1][1] == 'O' && tac[2][2] == 'O')
        return 'O';
    if (tac[2][0] == 'O' && tac[1][1] == 'O' && tac[0][2] == 'O')
        return 'O';

    return '/';
}
void input()
{char a;
    cout << "PILIH SESUAI URTAN BARIS DAN KOLOM: ";
    a=getch();
    cout<<endl;
    if (a == '1')
        tac[0][0] = pemain;
    else if (a == '2')
        tac[0][1] = pemain;
    else if (a == '3')
        tac[0][2] = pemain;
    else if (a == '4')
        tac[1][0] = pemain;
    else if (a == '5')
        tac[1][1] = pemain;
    else if (a == '6')
        tac[1][2] = pemain;
    else if (a == '7')
        tac[2][0] = pemain;
    else if (a == '8')
        tac[2][1] = pemain;
    else if (a == '9')
        tac[2][2] = pemain;
    else
    cout<<"TAATI PERATRAN DONG BANG"<<endl;
}
void pemainlain()
{
    if(pemain=='X')
        pemain='O';
        else
        pemain='X';
}
void gambar()
{
    for(short j=0;j<3;j++)
    {
        for(short k=0;k<3;k++)
        {cout<<tac[j][k]<<" ";}
        cout<<endl;
    }
}
void garisvertikal(short e=9, char var=' ')
{
    for(short d=0;d<e; d++)
    cout<<var<<endl;
}
void garis(short b=9, char outpt=' ')
{
    for(short a=0;a<b; a++)
    cout<<outpt;
}
int main()
{
      char masuk=0;
      while(true)
    {
      system("cls");
      tampilan();
      cout<<endl;
      garis();
      cout<<"KLIK ANGKA SESUAI YANG ANDA INGINKAN"<<endl;
      masuk=getch();
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
void tampilan()
{
   garisvertikal();
   garis();
   garis(30,'=');
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
    system("cls");
    gambar();
    while (1)
   {
    garisvertikal(2);
    input();
    gambar();
    if (kemenangan() == 'X')
        {
            cout << "Pemain Satu Menang'X'" << endl;
            break;
        }
        else if (kemenangan() == 'O')
        {
            cout << "Pemain Dua Menang 'O'" << endl;
            break;
        }
    pemainlain();
   }system("pause");
}
void how()
{
  system("cls");
  garisvertikal(5,' ');
  garis();
  cout<<"==---JADI GINI...---=="<<endl;
  garis();
  cout<<"===--CARA BERMAIN--==="<<endl<<endl;
  garis();
  cout<<"1 . KETIK ANGKA '1' UNTUK MEMULAI"<<endl;
  garis();
  cout<<"2 . SETELAH ITU MULAI PILIH SALAH SATU KOTAK"<<endl;
  garis();
  cout<<"3 . KETIK ANGKA '1' UNTUK BARIS SATU KOLOM SATU"<<endl;
  garis();
  cout<<"4 . KETIK ANGKA '2' UNTUK BARIS SATU KOLOM DUA"<<endl;
  garis();
  cout<<"5 . KETIK ANGKA '3' UNTUK BARIS SATU KOLOM DUA"<<endl;
  garis();
  cout<<"6 . KETIK ANGKA '4' UNTUK BARIS DUA KOLOM SATU"<<endl;
  garis();
  cout<<"7 . KETIK ANGKA '5' UNTUK BARIS DUA KOLOM DUA"<<endl;
  garis();
  cout<<"8 . KETIK ANGKA '6' UNTUK BARIS DUA KOLOM TIGA"<<endl;
  garis();
  cout<<"9 . KETIK ANGKA '7' UNTUK BARIS TIGA KOLOM SATU"<<endl;
  garis();
  cout<<"10. KETIK ANGKA '8' UNTUK BARIS TIGA KOLOM DUA"<<endl;
  garis();
  cout<<"11. KETIK ANGKA '9' UNTUK BARIS TIGA KOLOM TIGA"<<endl;
  garis();
  cout<<"12. PILIH KOTAK HINGGA BERJEJERAN TIGA 'X' ATAU 'O' TERGANTUNG KARAKTER ANDA"<<endl;
  garis();
  cout<<"13. BISA DIAGONAL/HORIZONTAL/VERTIKAL BERJEJERANNYA"<<endl;
  cout<<endl<<endl;
  cout<<"TEKAN APA SAJA UNTUK KEMBALI"<<endl;
  system("pause");
}
void credit()
{
  system("cls");
  garisvertikal(3);
  garis();
  cout<<"PEMBUAT: ACHMAD ROYHAN KAMIL"<<endl;
  garis();
  cout<<"AND MY REFRENCE 'NVitanovic' YOUTUBE"<<endl;
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
  system("pause");
}
void keluar()
{
   system("cls");
    cout<<endl<<endl<<endl;
    garis(8,' ');
    garis(30,'*');
    cout<<endl;
    garis(8,' ');
    garis(30,'=');
    cout<<endl<<endl<<endl;
    garis();
    cout<<"TERIMA KASIH TELAH MENCOBA :)"<<endl<<endl<<endl;
    garis(8,' ');
    garis(30,'=');
    cout<<endl;
    garis(8,' ');
    garis(30,'*');
    cout<<endl;
}
