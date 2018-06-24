#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll T,
	cin>>T;
	while(T--)
	{
		ll R,N,S,E,W;
		cin>>R>>N>>S>>E>>W;
		if(R==N||R==S||R==E||R==W)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
