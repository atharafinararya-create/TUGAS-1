// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    
    string nama[4];
    int nilai1[4];
    int nilai2[4];
    int i;
    float r;
    for (i=0; i<4; i++)
        {
            cout<<"masukan nama anda ";
            cin>>nama [i];
            cout<<"masukan nilai 1 anda ";
            cin>>nilai1[i];
            cout<<"masukan nilai 2 anda ";
            cin>>nilai2[i];
        }
    for(i=0; i<4; i++)
        {
            cout<<".............nilai siswa..................."<<endl;
            cout<<"namanya adalah: "<<endl;
            cout<<nama[i] <<endl;
            cout<<"nilai: "<<endl;
            cout<<nilai1[i] <<endl;
            cout<<nilai2[i] <<endl;
            cout<<"rata-ratanya adalah"<<endl;
            r=(nilai1[i]+nilai2[i])/2.0 ;
            cout<<r;
        }
}
