#include<iostream>
#include<array>
using namespace std;
// Disclamer bisa dikakukan di luping array standar ataupun yg library : <int, 10> nilaiArray
main(){
    //looping utk array
    /*
        for(deklarasi variabel : array){
            statement
        }
    */
    int arrayNilai[13] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    for(int nilai : arrayNilai){
        nilai *= 3;
        cout<<"address : "<<&nilai<<" nilainya : "<<nilai<<endl;

    }
    cout<<endl;
    // memanipulasi arry dengan menggunakan reference
    for(int &nilaiRef : arrayNilai){ //dia akan memberikan address sebenarnya jika dalam variable ditambahlan &variable
        nilaiRef *= 2;
        cout<<"address : "<<&nilaiRef<<" nilainya : "<<nilaiRef<<endl;
    }

    // maka nilai array akan berubah
    cout<<endl;
    for(int &nilaiRef : arrayNilai){
        cout<<"address : "<<&nilaiRef<<" nilainya : "<<nilaiRef<<endl;
    }
    cout<<endl;
    for(int nilai : arrayNilai){
        cout<<"address : "<<&nilai<<" nilainya : "<<nilai<<endl;
    }
}
