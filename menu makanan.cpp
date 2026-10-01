

#include <iostream>
using namespace std;
int main() {
    string menu[4]={"soto","rawon","nasi goreng","mie pangsit"};
    int total;
    int harga[4]={10000,15000,12000,15000};
    int porsi[4];
    int i;
    for(i=0;i<4;i++)
        {
            cout<<"menu makanan ";
            cout<<menu [i]<<endl;
            cout<<"harga : ";
            cout<<harga [i]<<endl;
            cout<<"masukkan porsi makanan : ";
            cin>>porsi[i];
        total= porsi[i]*harga[i];
            cout<<"totalnya adalah : ";
            cout<<total<<endl;
            cout<<"___________________________"<<endl;
            
        }
    return 0;
}
