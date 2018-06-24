#include<bits/stdc++.h>
using namespace std;
#define ll long long  
// Maximum Score .... MAXSC....
int main()
{
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	ll T;
	cin>>T;
	while(T--)
	{
		ll N;
		cin>>N;
		vector<ll> A[N];
		for(ll i=0;i<N;i++)
		{
			for(ll j=0;j<N;j++)
			{
				ll x;
				cin>>x;
				A[i].push_back(x);
			}
		}
		for(ll i=0;i<N;i++)
		{
			sort(A[i].begin(),A[i].end());
		}
		ll max = A[N-1].back(), sum=max,imp=0;
     	for(ll k=N-2;k>=0;k--)
     	{
     		ll flag=0, n = A[k].size();
    		for(ll l=n-1;l>=0;l--)
     		{
     			if(A[k][l]<max)
     			{
     				flag=1;
     				max=A[k][l];
     				sum+=A[k][l];
     				break;
				}
			}
			if(flag==0)
			{
				imp=1;
				break;
			}
		}
		if(imp==1)
		{
			cout<<"-1"<<"\n";
		}
		else
		{
			cout<<sum<<"\n";
		} 
	}
	return 0;
}
