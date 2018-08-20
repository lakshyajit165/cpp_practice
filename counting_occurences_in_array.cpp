#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,ele;
	cin>>n;
	int A[n];
	for(int i = 0; i<n; i++)
		cin>>A[i];
	cin>>ele;
	int c = count(A,A+n,ele);
	cout<<c;	
	return 0;
}
