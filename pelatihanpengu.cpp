#include<iostream>
using namespace std;
int main(){
    char ulangi = 'y';
    int counter = 0;

     while (ulangi == 'y')
     {
        cout << "apakah kamu mau mengulangi pus up" <<endl;
        cout << "jawab (y/t) :";
        cin >>ulangi;

        counter++;

     }

     cout << "<------------------------>" <<endl;
     cout << "perulangan selesai!" <<endl;
     cout << "kamu mengulangan sebanyak" << counter << "kali." <<endl;
}