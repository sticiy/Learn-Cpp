#include<iostream>
using namespace std;
main(){
	// f_n = f_n1 + f_n2
	int n;
	int f_n, f_n1, f_n2;
	cout<<"Program Latihan Deret Fibonaci \n";
	cout<<"Masukkan nilai ke-n : ";cin>>n;
	
	f_n1 = 1;
	f_n2 = 0;
	for(int i = 1; i <= n; i++){
		
		f_n = f_n1 + f_n2;
		cout<<f_n<<endl;
	}
}
