#include<bits/stdc++.h>
using namespace std;
// Multiple of three ... MULTHREE ....
#define ll long long
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll K,d0,d1;
		cin>>K>>d0>>d1;
		ll d2=(d0+d1)%10;
		ll sumCycle4 = (2*(d0+d1))%10+(4*(d0+d1))%10+(8*(d0+d1))%10+(6*(d0+d1))%10;
		ll ans=d0+d1+d2+(sumCycle4*((K-3)/4));
		ll rem = (K-3)%4;
		if(rem>0)
		{
			if(rem==1)
			{
				ans+=(2*(d0+d1))%10;
			}
			else if(rem==2)
			{
				ans+=(2*(d0+d1))%10+(4*(d0+d1))%10;
			}
			else
			{
				ans+=(2*(d0+d1))%10+(4*(d0+d1))%10+(8*(d0+d1))%10;
			}
		}
		if(ans%3==0)
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
