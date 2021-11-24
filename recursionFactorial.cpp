#include<iostream>
using namespace std;

int fac(int a){
	if(a==0 || a==1){
		return 1;
	}
	else if(a>1){
		return a*fac(a-1);
	}
}

int main(){
	
	int a;
	cout<<"\n\t enter value : ";
	cin>>a;
	
	cout<<"\n\t Factorial("<<a<<") : "<<fac(a)<<"\n";
	
	return 0;
}
