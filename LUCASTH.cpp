#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
// Lucas Theorem .... LUCASTH ...
void genCombi(ll , ll );
void CombiUtil(ll,ll,ll,ll[],ll);
ll sum = 0;
int main()
{
	ios_base::sync_with_stdio(false);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n,p;
		cin>>n>>p;
		ll k=1;
		for(ll j=1;j<=n;j++)
		{
			genCombi(n,j);
			if(sum%p!=0)
			{
				k++;
			}
			sum=0;
		}
		cout<<k%MOD<<"\n";
	}
	return 0;
}
void genCombi(ll n, ll r)
{
    ll data[r];

    CombiUtil(n, r, 0, data, 1);
}
void CombiUtil(ll n, ll r, ll index,ll data[], ll i)
{
    if (index == r) 
	{
		ll prod=1;
        for (int j = 0; j < r; j++)
        {
        	prod=prod*data[j];
		}
		sum=sum+prod;
        return;
    }
    if (i > n)
        return;
        
    data[index] = i;
    CombiUtil(n, r, index + 1, data, i + 1);
 
    CombiUtil(n, r, index, data, i + 1);
}

