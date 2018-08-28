#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		std::string s = std::to_string(n);
		std::replace(s.begin(),s.end(),'0','5');
		cout<<s<<endl;
	}
	return 0;
}
