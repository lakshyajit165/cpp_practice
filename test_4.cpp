#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int A[], int n);
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int A[n];
		for(int i = 0; i<n; i++)
			cin>>A[i];
		cout<<PalinArray(A,n)<<endl;	
	}
	return 0;
}
int PalinArray(int A[],int n){
	
	int flag = 0;
	for(int i = 0; i<n; i++){
		int temp,digit,revno = 0;
		temp = A[i];
		while(temp!=0){
			digit = temp%10;
			revno = revno*10+digit;
			temp/=10;
		}
		if(revno == A[i])
			continue;
		else{
			flag = 1;
			break;
		}	
	}
	if(flag){
		return(0);
	}else{
		return(1);
	}
}
