#include<iostream>
using namespace std;

int fibonacci(int n);

int main(){
	int input;
	int hasil;
	cout<<"Masukkan nilai ke : ";cin>>input;
	hasil = fibonacci(input);
	cout<<hasil;
}

int fibonacci(int n){
	cout<<n<<endl;
	if(n == 1 || n == 0){
		return n;
	}
	else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
