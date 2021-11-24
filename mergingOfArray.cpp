#include <iostream>
using namespace std;

int main(){
	
	int arr1[100],arr2[100];
	int a=1,e=0,w=0;
	
	while(int y=1){
		
		if(a==1){

			int q;
			cout<<"Enter values for first array(to end press 0) : ";
			cin>>q;
			if(q==0){
				a++;
				system("cls");
			}
			else{
				arr1[w] = q;
				w++;
				system("cls");
			}
		}
		
		else if(a==2){
			
			int q;
			cout<<"Now for second array(to end press 0) : ";
			cin>>q;
			if(q==0){
				a++;
				system("cls");
			}
			else{
				arr2[e] = q ;
				e++;
				system("cls");
			}
		}
		else if(a==3){
			
			--e;
			int* ptr=arr2;
			for(int i=e;i>=0;i--){
				cout<<"Value : "<<ptr[i]<<"\n";
			}
			
			--w;
			ptr = arr1;
			for(int i=w;i>=0;i--){
				cout<<"Value : "<<ptr[i]<<"\n";
			}
			
			a++;
		}
		else{
			exit(0);
		}
	}
	
	return 0;
}
