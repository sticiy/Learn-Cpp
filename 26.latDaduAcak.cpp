#include<iostream>
#include<cstdlib>//mengandung fungsi random
using namespace std;
main(){
	for(int i = 0; i < 10;i++){
		
		cout<<1 + (rand() % 6) <<endl;
	}
	cout<<endl<<endl;
	char lanjut;
	while(true){
		cout<<"Lempar dadu? (y/n)";cin>>lanjut;
		
		if(lanjut == 'y' || lanjut =='Y'){
			cout<<1 + (rand() % 6) <<endl;
		}
	}
}
