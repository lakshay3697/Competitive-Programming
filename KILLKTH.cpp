#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Killjee and k-th character .... KILLKTH ...
int main()
{
	string S;
	cin>>S;
	vector<string> A;
	for(ll i=0;i<S.length();i++)
	{
		for(ll j=1;j<=S.length()-i;j++)
		{
			A.push_back(S.substr(i,j));
		}
	}
	sort(A.begin(),A.end());
	string x;
	for(ll i=0;i<A.size();i++)
	{
		x=x+A[i];
	}
    ll Q;
    cin>>Q;
    ll G=0;
    while(Q--)
    {
    	ll P,M;
    	cin>>P>>M;
    	ll K = (P*G)%M+1;
    	cout<<x[K-1]<<"\n";
    	G=G+(ll)x[K-1];
    } 
	return 0;
}
