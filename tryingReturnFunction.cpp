#include<iostream>
using namespace std;

class helllo{
	public:
	int x;

	int retu(int x){
	
	int y=x+2;
	
	return y;
}
};

int main(){
	
	helllo f;
	
	cout<<"see-- "<<f.retu(3);
}
