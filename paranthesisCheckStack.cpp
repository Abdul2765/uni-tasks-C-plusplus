#include <iostream>
using namespace std;
void push(char arr[], int i){
	arr[i]=i;
}
void pop(char arr[], int i){
	arr[i]=i;
}

int main(){
	
	string inp;
	cout<<"Please Enter Your Input:    ";
	getline(cin, inp);
	int size=inp.length();
	char arr[size];
	char* ptr=arr;
	for(int i=0; i<size; i++){
		if(inp[i]=='('){
			push(arr, i);
			ptr++;
		}
		else if (inp[i]==')'){
			pop(arr, i);
			ptr--;
		}
		else{
			continue;
		}
	}
	if(ptr==arr){
		cout<<"No Error"<<endl;
	}
	else{
		cout<<"Error"<<endl;
	}
	
	
	
	return 0;
}
