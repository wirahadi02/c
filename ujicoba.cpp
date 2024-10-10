#include<iostream>
using  namespace std;
int main(){
    int nilaiujian;
    cout<<"==NILAI UJIAN=="<<endl;
    cout<<"masukan nilai anda;";
    cin>> nilaiujian;
    if (nilaiujian >= 80){
        cout <<"anda lulus mata kuliah ini"<<endl; 
    }else{
        cout <<"anda tidak lulus"<<endl;
    }
    cout<<"terimakasih"<<endl;
    return 0;

} 