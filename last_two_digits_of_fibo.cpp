#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void precomput(ll f[])
{
    
    f[0] = 0;
    f[1] = 1;

    for (ll i = 2; i < 300; i++)
        f[i] = (f[i-1] + f[i-2])%100;
}

int findLastDigit(ll f[], int n)
{
    return f[n%300];
}
  
int main() {
	//code
	ll f[300] = {0};
    precomput(f);
 
	int t;
	cin>>t;
	while(t--){
    	ll n;
    	cin>>n;
        cout<<findLastDigit(f, n)<<endl; 
	}
	return 0;
}
