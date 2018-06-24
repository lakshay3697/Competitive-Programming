#include<bits/stdc++.h>
using namespace std;
// Programming Competition ....
#define ll long long
int main()
{
	ll n;
	cin>>n;
	vector<pair<string,pair<ll,ll> > > A;
	for(ll i=0;i<n;i++)
	{
		string s;
		ll d,j;
		cin>>s>>d>>j;
		A.push_back(make_pair(s,make_pair(d,j)));
	}
	vector<ll> ques;
	for(ll i=0;i<A.size();i++)
	{
		ll diff = A[i].second.second-A[i].second.first;
		ques.push_back(diff);
	}
	ll max=ques[0];
	for(ll j=1;j<ques.size();j++)
	{
		if(ques[j]>max)
		{
			max=ques[j];
		}
	}
	ll pos=0;
	for(ll i=0;i<ques.size();i++)
	{
		if(ques[i]==max)
		{
			pos=i;
			break;
		}
	}
	cout<<A[pos].first<<" "<<ques[pos]<<"\n";
	return 0;
}
