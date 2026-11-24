// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    string menu[2]={"soto","rawon"};
    int harga[2]={15000,20000};
    int porsi[2];
    int total[2];
    int i;
    int grandtotal=0;
    for(i=0;i<2;i++)
        {
            cout<<"___________________"<<endl;
            cout<<"menu ";
            cout<<menu[i]<<endl;
            cout<<"harga ";
            cout<<harga[i]<<endl;
            cout<<"masukkan porsi ";
            cin>>porsi[i];
            total[i]=porsi[i]*harga[i];
            cout<<"total ";
            cout<<total[i]<<endl;
            grandtotal=grandtotal+total[i];
            cout<<"___________________"<<endl;
        }
    
    cout<<"\n=========TOTAL SEMUA========="<<endl;
    cout<<"\nTotal Pesanan Anda Adalah: ";
    cout<<grandtotal<<endl;
    cout<<"\n===============================";
system("pause");
    
    return 0;
}
