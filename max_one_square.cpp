#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		int A[r][c];
		for(int i = 0; i<r; i++)
			for(int j = 0; j<c; j++)
					cin>>A[i][j];
		
		int B[r+c],count,max;
		for(int i = 0; i<r; i++){
			count = 0;
			for(int j = 0; j<c; j++){
				if(A[i][j] == 1){
					count++;
					B[i]+=1;
				}
			}
		}	
		int k = 1;
		max = B[0];
		while(1){
			if(max > B[k])
				max = B[k];
			else if(B[k] == 0)
				break;
			k++;		
		}	
		cout<<max*max;
		
	}
	return 0;
	
}
