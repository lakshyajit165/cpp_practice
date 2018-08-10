#include<iostream>
using namespace std;
int combination(int, int);
int main(){
	
	int n,k;
	cin>>n>>k;
	cout<<combination(n,k);
	return 0;
}
int combination(int x, int y){
	
	if(y == 0 || x == y) return 1;
	
	else return(combination(x-1,y)+combination(x-1,y-1));
}
