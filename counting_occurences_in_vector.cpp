#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,ele,t;
	cin>>n;
	vector<int>A;
	for(int i = 0; i<n; i++){
		cin>>t;
		A.push_back(t);
	}
	cin>>ele;
	int c = count(A.begin(),A.end(),ele);
	cout<<c;	
	return 0;
}
