#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Permutation and Palindrome ... PERMPAL ...
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		vector<ll> A[26];
	    ll ch_hash[26]={0};	
	    for(ll i=0;i<s.length();i++)
	    {
	    	ll x=(ll)(s[i]-97);
	    	ch_hash[x]++;
	    	A[x].push_back(i+1);
		}
		for(ll i=0;i<26;i++)
		{
			for(ll j=0;j<A[i].size();j++)
			{
				cout<<A[i][j]<<" ";
			}
			cout<<"\n";
		}
		for(ll i=0;i<26;i++)
		{
			cout<<ch_hash[i]<<" ";
		}
		cout<<"\n";
		ll e=0,o=0;
		for(ll i=0;i<26;i++)
		{
			if(ch_hash[i]>0)
			{
				if(ch_hash[i]%2==0)
				{
					e++;
				}
				else
				{
					o++;
				}
			}
		}
		if(o>1)
		{
			cout<<"-1"<<"\n";
		}
		else
		{
			ll N = s.length();
			ll ans[N];
			for(ll s=1;s<=N;s++)
			{
				ans[s]=0;
			}
			ll k=1,ele=0;
			for(ll i=0;i<26;i++)
			{
				if(ch_hash[i]>0)
				{
					if(ch_hash[i]%2==0)
					{
						for(ll m=0;m<A[i].size();m+=2)
						{
							ans[k]=A[i][m];
							ans[N-k+1]=A[i][m+1];
							k++;
							ele+=2;
						}
						if(ele==N)
						{
							//cout<<"Entered Break"<<"\n";
							break;
						}
					}
					else
					{
						//cout<<"king"<<"\n";
						ans[(N/2)+1]=A[i][0];
						ele+=1;
					    for(ll m=1;m<A[i].size();m+=2)
						{
							ans[k]=A[i][m];
							ans[N-k+1]=A[i][m+1];
							k++;
							ele+=2;
						}
						if(ele==N)
						{
							break;
						}	
					}
				}
			}
			for(ll i=1;i<=N;i++)
			{
				cout<<ans[i]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
