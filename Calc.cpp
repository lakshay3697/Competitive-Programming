#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Calculator.......CALC......
ll max(ll,ll);
int main()
{
	ll T,N,B;
	cin>>T;
	while(T--)
	{
		cin>>N>>B;
		ll x,y,m1,m2;
		x = floor(N/(2*B));
		y = x+1;
		m1 = ((N-(x*B)))*x;
		m2 = ((N-(y*B)))*y;
		cout<<max(m1,m2)<<"\n";
	}
	return 0;
}
ll max(ll a,ll b)
{
	if(a>b)
	return a;
	else
	return b;
}
