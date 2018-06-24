#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define MOD 1000000007
ll simplestSum(ll,ll,ll);
ll fun(ll,ll);
ll simplestSum(ll k, ll a, ll b) 
{
    ll ans=0;
      for(ll i=a;i<=b;i++)
      {
          ans+=fun(k,i)%MOD;
      }
    ans=ans%MOD;
    return ans;
}
ll fun(ll x, ll l) 
{
    ll sum=0;
    cout<<l<<"\n";
    for(ll m=1;m<=l;m+=1)
    {
    	cout<<m<<" ";
        sum+=m;
        m*=x;
    }
    cout<<"\n";
    return sum;
}

int main() {
    ll q;
    cin >> q;
    for(ll a0 = 0; a0 < q; a0++){
        ll k;
        ll a;
        ll b;
        cin >> k >> a >> b;
        ll result = simplestSum(k, a, b);
        cout << result << endl;
    }
    return 0;
}

