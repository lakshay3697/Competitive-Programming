#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Survive in chocoland ... SURVIVE ....
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N,K,S;
		cin>>N>>K>>S;
		ll weeks=S/7;
		ll actdays=(S-weeks);
		if((actdays*N)<S*K)
		{
			cout<<"-1"<<"\n";
		}
		else
		{
			ll ans = (K*S)/N;
			ll rem = (K*S)%N;
			if(rem>0)
			{
				ans+=1;
			}
			cout<<ans<<"\n";
		}
	}
	return 0;
}
