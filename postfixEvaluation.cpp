#include<iostream>
#include<string.h>
#include<string>
using namespace std;

string postfix;
float stack[20];
int top=-1,res;

float push(float a){
	++top;
	cout<<".."<<a<<"..";
	stack[top]=a;
}

float pop(){
	float a;
	a=stack[top];
	--top;
	return a;
}

int main(){
	
	cout<<"Enter valid expression (postfix evaluation) : ";
	cin>>postfix;
	
	for(int i=0;i<postfix.length();i++){
		if(postfix[i] >= '0' || postfix[i] <= '9'){
			float a = (float)(postfix[i]-48);
			push(a);
		}
//		else if(postfix[i] = ',' || ' '){
//			++top;
//		}
		else if(postfix[i] = '+'){
			float op1,op2;
			op1 = pop();
			op2 = pop();
			res = op2+op1;
			push(res);			
		}
		else if(postfix[i] = '-'){
			float op1,op2;
			op1 = pop();
			op2 = pop();
			res = op2-op1;
			push(res);	
		}
		else if(postfix[i] = '*'){
			float op1,op2;
			op1 = pop();
			op2 = pop();
			res = op2*op1;
			push(res);			
		}
		else if(postfix[i] = '/'){
			float op1,op2;
			op1 = pop();
			op2 = pop();
			res = op2/op1;
			push(res);			
		}
	}
	cout<<"result : "<<pop()<<"\t"<<postfix[0]<<"\t"<<postfix[1]<<"\t"<<postfix[2];
	cout<<"\n\n\t"<<stack[0]<<"\t"<<stack[1]<<"\t"<<stack[2];
	return 0;
}
