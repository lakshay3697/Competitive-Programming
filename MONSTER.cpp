#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Killing Monsters ... MONSTER ...
int main()
{
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	ll N,A[131080];
	cin>>N;
	for(ll i=0;i<N;i++)
	{
		cin>>A[i];
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll x,y,live=0;
		cin>>x>>y;
		for(ll k=0;k<N;k++)
		{
			ll m = k&x;
			if(m==k)
			{
				A[k]-=y;
			}
		}
		for(ll j=0;j<N;j++)
		{
			if(A[j]>0)
			{
				live++;
			}
		}
		cout<<live<<"\n";
	} 
	return 0;
}
