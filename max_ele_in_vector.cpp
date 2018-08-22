#include<bits/stdc++.h>
using namespace std;
int main(){
	
	vector<int>A;
	int n,a;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>a;
		A.push_back(a);
	}
	int max_ele = *std::max_element(A.begin(),A.end());
	cout<<max_ele;
	return 0;
}
