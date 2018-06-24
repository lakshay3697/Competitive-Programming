#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define PI acos(-1)
ll int a=0;
ll int power(ll int a,ll int b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll int ans=power(a,b/2)%MOD;
	ans=(ans*ans)%MOD;
	if(b%2==1)
	ans=(ans*a)%MOD;
	return ans%MOD;
}
 
ll int co(ll int n)
{
	if(n==0)
	return 1;
	if(n==1)
	return a;
	if(n%2)
	{
		return ((2*co(n-1)*a)%MOD-(co(n-2))%MOD+MOD)%MOD;	
	} 
	else
	{
		ll int b=(co(n/2))%MOD;
		b=(b*b)%MOD;
		return (2*b-1+MOD)%MOD;
	}
}
 
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		ll int l,d,t;
		cin >> l >> d >> t;
		a=((d%MOD)*power(l,MOD-2))%MOD;
		ll int ans=(l*co(t))%MOD;
 
		cout << ans << endl;
	}
}
