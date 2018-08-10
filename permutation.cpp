#include<iostream>
using namespace std;
int factorial(int);
int main(){
	
	int n,k;
	cin>>n>>k;
	int result = factorial(n)/factorial(k);
	cout<<n<<"P"<<k<<" = "<<result;
	return 0;
}
int factorial(int a){
	
	if(a == 0)
	  return 1;
	  else 
	    return a*factorial(a-1);
}
