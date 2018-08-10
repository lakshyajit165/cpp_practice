#include<iostream>
using namespace std;
void selection_sort(int A[], int n){

	int min,temp;
	for(int i = 0; i<n-1; i++){
		min = i;
		for(int j = i+1; j<n; j++){
			if(A[j] < A[min])
				min = j;
		}
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
	for(int l = 0; l<n; l++)
			cout<<A[l]<<" ";
		
		
}
int main(){
	
	int n;
	cin>>n;
	int A[n];
	for(int i = 0; i<n; i++)
			cin>>A[i];
	selection_sort(A,n);		
	return 0;
}
