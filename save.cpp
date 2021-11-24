#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class example{
	public:
		int x;
		int arr[];
	
	void push(example e){
		
		int z=1;
		int t=e.x;
		e.x=e.x+z;
		e.arr[e.x];
		cout<<"enter number u want to push : ";
		int p;
		cin>>p;
		e.arr[t]=p;
	}
	void display(example e){
		int i=0,p=1,h=4;
		cout<<"\n--"<<e.x<<"--"<<h<<"--\n";
		while(p==1){
			cout<<"\nvalue : "<<e.arr[i];
			i++;
			if(i==e.x){
				exit(0);
			}
		}
	}
	void create(example e){		
//		cout<<"enter size of Stack : ";
//		cin>>e.x;
//		e.arr[e.x];
		
		for(int i=0 ; i<e.x ; i++){
			cout<<"enter values :";
			cin>>e.arr[i];
		}
		system("cls");
	}
};

int main(){
	
	example e1;
	
	cout<<"enter size of Stack : ";
	cin>>e1.x;
	e1.arr[e1.x];

	
	e1.create(e1);
	
	int z=1;
	while(z==1){
		
		cout<<"---STACK---";
		cout<<"\n1 ---push---";
		cout<<"\n2 ---pop---";
		cout<<"\n3 ---display---";
		cout<<"\n4 ---exit---";
		
		cout<<"\n\n---ENTER : ---";
		int y=0;
		cin>>y;
		
		if(y==1){
			e1.push(e1);
			system("pause");
			system("cls");
		}
		else if(y==2){
			//pop();
			system("pause");
			system("cls");
		}
		else if(y==3){
			e1.display(e1);
			system("pause");
			system("cls");
		}
		else if(y==4){
			exit(0);
		}
	}
	return 0;
}
