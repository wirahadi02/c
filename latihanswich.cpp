#include <iostream>
using namespace std;

int main (){
    char jeniskelamin;

    cout<<"jenis kelamin : "<<endl;
    cout<<"L"<<endl;
    cout<<"P"<<endl;
   
    cout<<"masukan jenis kelamin (L/P) : "<<endl;
    cin >> jeniskelamin;
    switch (jeniskelamin) {
        case 'L':
        cout<<"laki-laki";
        break;
         case 'P':
        cout<<"perempuan";
        break;
         
        default :
        cout<<"jenis tidak valid.";
    }
}