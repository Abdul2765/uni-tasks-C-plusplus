#include<iostream>
using namespace std;

class Que{
	public:
		int f=-1;
		int r=-1;
		int arr[15];
		
		bool isempty(){
			bool a;
			if(f==-1 && r==-1){
				a = true;
			}
			else{
				a = false;
			}
			return a;
		}
		
		bool isfull(){
			bool a;
			if(f==14 && r==14){
				a = true;
			}
			else{
				a = false;
			}
			return a;
		}
		
		int enque(int a){
			if(isempty()){
				r++;
				f++;
				arr[r] = a;
			}
			else{
				r++;
				arr[r] = a;
			}
		}
		
		int deque(){
			return arr[f];
		}
		
		void display(){
			if(!isempty()){
				int a;
				f = a;
				for(int i=a;i<=r;i++){
					cout<<"\n";
				}
			}
		}
};

int main(){
	
	Que is;
	int i=1,j;
	
	while(i>=1){
	
	cout<<"\n\t1.Enque";
	cout<<"\n\t2.Deque";
	cout<<"\n\t3.Display";
	cout<<"\n\t4.Exit";
	cout<<"\n\n\tEnter : ";;
	cin>>i;
	
	if(i==1){
		system("cls");
		cout<<"enter number : ";
		cin>>j;
		is.enque(j);
	}
	else if(i==2){
		system("cls");
		cout<<"dequed value : "<<is.deque();
		is.f++;
	}
	else if(i==3){
		is.display();
	}
	else if(i==4){
		i = 0;
	}
	
	}
	
	return 0;
}
