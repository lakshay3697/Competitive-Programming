#include<bits/stdc++.h>
using namespace std;
#define ll long long
// String Merging .... STRMRG ...
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N,M;
		cin>>N>>M;
		string A,B;
		cin>>A>>B;
		ll ans=0;
		ll A_hash[26]={0},B_hash[26]={0};
		for(ll i=0;A[i]!='\0';i++)
		{
			ll x=(ll)A[i]-97;
			A_hash[x]++;
		}
		for(ll i=0;B[i]!='\0';i++)
		{
			ll y=(ll)B[i]-97;
			B_hash[y]++;
		}
		for(ll i=0;i<26;i++)
		{
			if((A_hash[i]>0)||(B_hash[i]>0))
			{
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
