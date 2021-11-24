#include<iostream>
#include<string.h>
using namespace std;

char Stack[20];
int =-1;

bool isempty()
{
	bool empty = false;
	if(size == -1)
		empty = true;
	return empty;
}

string push(char a){
	size++;
	stack[size] = a;
}

char pop(){
	char a;
	if(!check()){
		a = stack[size];
		size--;
	}
	return a;
}

int precedence(char c){
	if(c=='^'){
		return 3;
	}
	else if(c=='*'||c=='/'){
		return 2;
	}
	else if(c=='+'||c=='-'){
		return 2;
	}
	else{
		return -1;
	}
}

char top(){
	char a;
	if(!check())
		a = stack[size];
	return a;	
}

int main(int argc, char** argv){
	
	string infix;
	cout<<"enter valid expression : ";
	cin>>infix;
	
	string postfix;
	char ch;
	
	for(int i=0 ; i<infix.length() ; i++){
		ch = infix[i];
		
		if((ch>='a' && ch<= 'z') || (ch>='A'&&ch<='Z')){
			postfix += ch;
		}
		else if(ch == '('){
			push(ch);
		}
		else if(ch == ')'){
			while(top() != '('){
				postfix += pop();
			}
			pop();
		}
		else{
			while(!check() && precedence(infix[i]) <= precedence(top())){
				postfix += pop();
			}
			push(ch);
		}
	}
	while(!check()){
		postfix += pop();
	}
	
	cout<<"ur postfix is : ";
	cout<<postfix;
	
	return 0;
}
