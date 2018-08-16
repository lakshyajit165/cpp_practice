#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	ll ar[n+1];
	
	for(ll i=1;i<=n;i++)
		cin>>ar[i];
	
	ll k;
	cin>>k;
	ll b[100001];
	
	for(ll i=1;i<=n;i++)
	{
		b[ar[i]]++;
	}
	ll ans=0;
	for(ll i=1;i<=n;i++)
	{
		if(b[i]==k)
		{
			ans=i;
			break;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
