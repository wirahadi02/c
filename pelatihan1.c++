#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int b = 2;
    
    bool hasil;
    hasil = !( a== 3);

//and
cout << "and" << endl;
hasil = (a== 3) and (b == 2);
cout << hasil << endl;
hasil = (a == 3) and (b == 5);
cout << hasil << endl;

//or
cout << "or" << endl;
hasil = (a== 3) or (b == 2);
cout << hasil << endl;
hasil = (a == 3) or (b == 5);
cout << hasil << endl;
hasil = (a == 4) or  (b ==5);
cout << hasil << endl;

//not
cout << "not" << endl;
hasil = !(a== 3 && b == 2);
cout << hasil << endl;
hasil = !(a == 3 && b == 5);
cout << hasil << endl;
hasil = !(a == 4 &&  b ==5);
cout << hasil << endl;

cin.get();
return 0;
}

