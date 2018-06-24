#include<bits/stdc++.h>
using namespace std;
// Weasel does xor on tree ....
// BE PHENOMENAL OR BE FORGOTTEN .....WEASELTX .......
#define ll long long
void dfs(ll,ll,vector<ll>[],vector<ll>[]);
int main()
{
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll N,Q;
    cin>>N>>Q;
    vector<ll> A[N];
    vector<ll> B[N];
    for(ll i=0;i<N-1;i++)
    {
    	ll u,v;
    	cin>>u>>v;
    	A[u].push_back(v);
	}
	for(ll i=0;i<N;i++)
	{
		B[i].push_back(i);
		ll k =i;
		dfs(i,k,A,B);
	}
	ll arr[N]={0};
	for(ll i=0;i<N;i++)
	{   
	    ll X;
		cin>>X;
		arr[i]=X;
	}
	ll day[Q]={0},max=0;
	for(ll i=0;i<Q;i++)
	{
		ll d;
		cin>>d;
		if(d>max)
		{
		   max=d;
	    }
		day[i]=d;
	}
    ll C[max+1][N]={0};
	for(ll j=0;j<N;j++)
	{
		C[0][j]=arr[j];
	}
	for(ll i=1;i<max+1;i++)
	{
		for(ll j=0;j<N;j++)
		{
			ll c=0;
        	for(ll k=0;k<B[j].size();k++)
	        {
		      c=c^C[i-1][B[j][k]];
	        }
			C[i][j]=c;  
		}
	}
	for(ll i=0;i<Q;i++)
	{
		cout<<C[day[i]][0]<<"\n";
	}
	return 0;
}
void dfs(ll root, ll node_i,vector<ll> A[],vector<ll> B[])
{
	for(ll i=0;i<A[root].size();i++)
	{
		B[node_i].push_back(A[root][i]);
	}
	for(ll i=0;i<A[root].size();i++)
	{
		dfs(A[root][i],node_i,A,B);
	}
}

