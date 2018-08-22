#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,max_count,temp_count;
    string s;
    cin>>n;
    int A[n];
    cin>>s;
    for(int i = 0; i<s.length(); i++)
            A[i] = std::count(s.begin(),s.end(),s[i]);
    
	max_count = *std::max_element(A,A+n);
	for(int i = 0; i<s.length(); i++){
		temp_count = std::count(s.begin(),s.end(),s[i]);
		if(temp_count == max_count){
			s.erase(std::remove(s.begin(), s.end(), s[i]), s.end());
			break;
		}
			
	}
	cout<<s.length();
	return 0;
    
}
