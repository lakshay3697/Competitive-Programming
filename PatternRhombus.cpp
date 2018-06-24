#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Pattern Rhombus
int main()
{
    ll N;
    cin>>N;
    for(ll i=1;i<=N;i++)
    {
        for(ll j=i;j<N;j++)
        {
            cout<<" ";
        }
        for(ll k=1;k<(i*2);k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
    for(ll i=1;i<N;i++)
    {
        for(ll j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(ll k=1;k<((N-1)*2);k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
}
