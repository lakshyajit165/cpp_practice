#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}
int PalinArray(int A[], int n)
{  //add code here.
    int flag = 1;
    for(int i = 0; i<n; i++){
        int digit,revno=0,temp = A[i];
        while(temp!=0){
            digit = temp%10;
            revno = revno*10+digit;
            temp/=10;
        }
        if(A[i]!=revno){
            flag = 0;
            break;
        }
    }
    return flag;
}
