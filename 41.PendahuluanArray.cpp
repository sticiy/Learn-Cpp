#include<iostream>
using namespace std;

main(){
	int array[5];
	array[0]=1;
	array[1]=2;
	array[2]=3;
	array[3]=4;
	array[4]=5;
	array[5]=6;
	for(int i; i < 6; i++){
		cout<<array[i]<<endl;
	}
	
	cout<<sizeof(array)<<endl;
	cout<<sizeof(array)/sizeof(int);
}
