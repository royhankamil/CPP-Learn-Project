#include <iostream>

using namespace std;

int main()
{  int angka;
    cout << "masukkan angka untuk membuat segi tiga: ";
    cin>>angka;
      for (int g=1;g<angka;g++){
         for (int h=angka;h>g;h--){
             cout<<" ";
         }
      for (int a=1;a<angka;a++){
        for (int b=1;b<=angka;b++){
            cout<<"*";
        }cout<<endl;
      }

      }

    return 0;
}
