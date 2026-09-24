#include <iostream>
using namespace std;

int main() 
{   
    string nama[3]={"udin","joko","mila"};
    int password[3]={123,456,789};
    string namaanda;
    string passwordanda;
    int i;

    cout<<"masukan nama anda";
    cin>>namaanda;
    cout<<"masukan password anda";
    cin>>passwordanda;
    
    if (namaanda=="udin"&&passwordanda=="123")
    {
        cout<< "halo udin";
    }
    cout<<"selamat berhasil login";
    return 0;
}
