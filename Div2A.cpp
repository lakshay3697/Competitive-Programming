#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Eleven ... CF...(Div 2)
int main()
{
	ll N;
	cin>>N;
	string ans;
	vector<ll> A;
	ll first=1,second=1;
	A.push_back(first);
	A.push_back(second);
	while((first+second)<=N)
	{
		ll third=first+second;
		A.push_back(third);
		first=second;
		second=third;
	}
	for(ll i=0;i<A.size();i++)
	{
		cout<<A[i];
	}
	cout<<"\n";
	for(ll i=1;i<=N;i++)
	{
		ll flag=0;
		for(ll j=0;j<A.size();j++)
		{
			if(A[j]==i)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			char c='O';
			ans+=c;
		}
		else
		{
			char c='o';
			ans+=c;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
