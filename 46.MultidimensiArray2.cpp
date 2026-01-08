#include<iostream>
using namespace std;
main(){
    int baris = 4;
    int kolom = 3;
    int matrix[baris][kolom];

    //membuat alur program
    for(int i = 0; i < baris; i++){
        for(int j = 0; j<kolom; j++){
            cout<<"Masukkan Elemen ["<<i<<"]"<<"["<<j<<"] : ";
            cin>>matrix[i][j];
        }
    }
    for(int i = 0; i < baris; i++){ //satu blok ini selesai maka akan endline dan dibuat garis baru seperti matrix, dan menjalankan lagi dari atas
        for(int j = 0; j < kolom; j++){
            matrix[baris][kolom] = matrix[i][j];
            cout<<matrix[baris][kolom];
        }
    cout<<endl;
    }

}
