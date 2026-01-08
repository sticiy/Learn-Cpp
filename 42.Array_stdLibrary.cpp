#include<iostream>
#include<array>
using namespace std;

int main(){
//	Membuat array dngn standard library
//array<int, jumlah array> nama array

	array<int, 5>nilai;

	for(int i; i <= 5; i++){
		nilai[i] = i;
		cout<<"nilai array = "<<nilai[i]<<endl<<"address array = "<<&nilai[i]<<endl<<endl;
		if(nilai[5]){
            break;
		}
	}

    // ukuran array
    cout<<"ukuran : "<<nilai.size()<<endl;
    // ukuran address awal
    cout<<"address awal : "<<nilai.begin()<<endl;
    //address akhir
    cout<<"address akhir : "<<nilai.end()<<endl;
    // nilai ke dua
    cout<<"nilai ke 2 : "<<nilai.at(2)<<endl;

}
