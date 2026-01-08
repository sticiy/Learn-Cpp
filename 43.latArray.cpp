#include<iostream>
#include<array>
using namespace std;

main(){
    array<int, 10>nilai;
    cout<<"program menampilkan grafik nilai"<<endl<<endl;

    for(int i;i <= nilai.size(); i++){
        nilai[i]=i;
        cout<<"jumlah mahasiswa dengan nilai : ";
        if (i == 0){
            cout<<"0-9: ";
            cin>>nilai[i];
        }
        else if(i == 10){
            cout<<"100: ";
            cin>>nilai[i];
        }
        else {
            cout<<i*10<<"-"<<(i*10)+9<<": ";
            cin>>nilai[i];
        }
    }
    cout<<"hi";
}
