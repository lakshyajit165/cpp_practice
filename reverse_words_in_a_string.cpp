#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,len;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        len = s.length();
        string A[len];
        string temp = "";
        for(int i = 0; i<s.length(); i++){
            if(s[i]!='.')
                temp += s[i];
            else{
                A[len-1] = temp;
                len -= 1;
                temp = "";
            }    
        }
        for(int i = 0; i<len; i++)
        {
        	if(i == len - 1)
        		cout<<A[i];
        	else{
        		cout<<A[i]<<".";
			}	
	    }
    }
    return 0;
}
