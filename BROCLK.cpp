#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long
#define MOD 1000000007
// Broken Clock ... BROCLK ...
ll Inv_mod(ll,ll);
ll power(ll,ll,ll);
int main()
{
 	ll T;
	cin>>T;
	while(T--)
	{
		ul l,d,t;
		cin>>l>>d>>t;
		if(ceil(log2(t))==floor(log2(t)))
		{
			cout<<"King"<<"\n";
			ll ans=0;
			ans = ((d%MOD*l%MOD)%MOD*Inv_mod(l,MOD))%MOD;
			ll A[t+1]={0},B[t+1]={0};
			A[0]=1,B[0]=1;
			A[1]=ans,B[1]=l;
			for(ll i=2;i<=t;i*=2)
			{
   				ans=((((2%MOD*A[i/2]%MOD*A[i/2]%MOD*B[0]%MOD)%MOD+MOD-(A[0]%MOD*B[i/2]%MOD*B[i/2]%MOD)%MOD)%MOD*Inv_mod((B[i/2]*B[i/2]*B[0]),MOD))%MOD*l%MOD)%MOD;
				A[i]=ans,B[i]=l;
			}
			if(ans<0)
			{
				cout<<MOD-ans<<"\n";
			}
			else
			{
				cout<<ans<<"\n";
			}
		}
		else
		{
			cout<<"Queen"<<"\n";
			ll ans=0;
			ans = ((d%MOD*l%MOD)%MOD*Inv_mod(l,MOD))%MOD;
			vector<pair<ll,ll> > Num_den;
			Num_den.push_back(make_pair(1,1));
			Num_den.push_back(make_pair(ans,l));
			for(ll i=2;i<=t;i++)
			{
   				ans=(((2%MOD*Num_den[i-1].first%MOD*Num_den[i-2].second%MOD*d%MOD)%MOD+MOD-(Num_den[i-2].first%MOD*Num_den[i-1].second%MOD*l%MOD)%MOD)%MOD*Inv_mod((Num_den[i-1].second*Num_den[i-2].second),MOD))%MOD;
	   			Num_den.push_back(make_pair(ans,l));
			}
			cout<<ans<<"\n";
			if(ans<0)
			{
				cout<<MOD-ans<<"\n";
			}
			else
			{
				cout<<ans<<"\n";
			}
		}
	} 
	return 0;
}
// Calculating modular Inverse using Fermat's theorem as 10^9+7 is prime ...
ll Inv_mod(ll a,ll m)
{
    return power(a, m-2, m);
}
ll power(ll x,ll y,ll m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y/2, m) % m;
    p = (p%m*p%m)%m; //(p*p)%m can be written like this using modular multiplication ...
    if(y%2==0)
    {
    	return p;
	}
	else
	{
		return (x%m*p%m)%m; //(x*p)%m can be written like this using modular multiplication ...
	}
}

