#include<iostream>
using namespace std;
int main(){
    char ulangi = 'y';
    int counter = 0;

     do
     {
        cout << "apakah kamu mau mengulangi pus upy" <<endl;
        cout << "jawab (y/t) :";
        cin >>ulangi;

        counter++;

     } while (ulangi == 'y');

     cout << "<------------------------>" <<endl;
     cout << "perulangan selesai!" <<endl;
     cout << "kamu mengulangan sebanyak" << counter << "kali." <<endl;
}