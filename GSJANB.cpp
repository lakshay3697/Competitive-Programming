#inlcude<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
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
			for(ll j=0;j<A[i].size();j++)
			{
				cout<<A[i][j]<<" ";
			}
			cout<<"\n";
		}
		for(ll i=0;i<N;i++)
		{
			sort(A[i].begin(),A[i].end());
		}
		for(ll i=0;i<N;i++)
		{
			for(ll j=0;j<A[i].size();j++)
			{
				cout<<A[i][j]<<" ";
			}
			cout<<"\n";
		}
		ll sum=0;
		for(ll i=0;i<N;i++)
		{
			sum+= (A[i].back()-A[i][0]);
		}
		cout<<sum<<"\n";
	}
	return 0;
}
