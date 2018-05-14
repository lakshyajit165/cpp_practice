#include<iostream>
using namespace std;
int GCD(int,int);
int main(){
	
	int m,n;
	cin>>m>>n;
	cout<<GCD(m,n);
	return 0;
}
int GCD(int x, int y){
	 
	 int r;
	
	if(x<y) return GCD(y,x);
	
	else if(x%y == 0) return y;
	
	      else{
	      	r = x%y;
	      	return GCD(y,r);
		  }
	
}
