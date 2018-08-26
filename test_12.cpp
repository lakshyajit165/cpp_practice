#include<iostream>
using namespace std;
int main(){
	
	int n,temp,key,i,j;
	cin>>n;
	int A[n];
	for(i = 0; i<n; i++)
		cin>>A[i];
	for(int i = 1; i<n; i++){
		key = A[i];
		j = i - 1;
		while(j >= 0 && A[j] > key){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
	return 0;
}
