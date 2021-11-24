#include<iostream>
using namespace std;

int fib(int a){
	
	if(a==0){
		return 0;
	}
	else if(a==1 || a==2){
		return 1;
	}
	else if(a>2){
		return fib(a-1)+fib(a-2);
	}
}

int main(){
	
	int a;
	cout<<"enter index value for fibonacci : ";
	cin>>a;
	
	cout<<"\nFibonacci : "<<fib(a)<<"\n";
	
	return 0;
}
