#include<bits/stdc++.h>
using namespace std;
#define ll long long
// String Merging ..... STRMRG ....
ll LCS_Shit(string,string,ll,ll);
ll max(ll a,ll b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ll T;
	cin>>T;
	while(T--)
	{
		ll N,M;
		cin>>N>>M;
		string A,B;
		cin>>A>>B;
		// Reducing the strings by removing contiguous equal characters .....
		string A_red="",B_red="";
		for(ll i=0;i<N;i++)
		{
			A_red+=A[i];
			while((A[i+1]==A[i])&&(i+1<N))
			{
				i++;
			}
		}
		// Reduced string A ...
	//	cout<<A_red<<"\n";
        for(ll i=0;i<M;i++)
		{
			B_red+=B[i];
			while((B[i+1]==B[i])&&(i+1<N))
			{
				i++;
			}
		}
		// Reduced String B ...
	//	cout<<B_red<<"\n";
		// Calling LCS (the members of LCS combine as to form a merged string with minimum instances where S[i]!=S[i+1])
		ll sleep = LCS_Shit(A_red,B_red,A_red.size(),B_red.size());
	//	cout<<sleep<<"\n";
		cout<<(A_red.size()+B_red.size()-sleep)<<"\n";		
	}
	return 0;
}
ll LCS_Shit(string A,string B,ll N,ll M)
{
	ll lcs[N+1][M+1];
	for(ll i=0;i<N+1;i++)
	{
		for(ll j=0;j<M+1;j++)
		{
			if(i==0||j==0)
			{
				lcs[i][j]=0;
			}
			else if(A[i-1]==B[j-1])
			{
				lcs[i][j]=lcs[i-1][j-1]+1;
			}
			else if(A[i-1]!=B[j-1])
			{
				lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
			}
		}
	}
/*	for(ll i=0;i<N+1;i++)
	{
		for(ll j=0;j<M+1;j++)
		{
			cout<<lcs[i][j]<<" ";
		}
		cout<<"\n";
	} */
	return lcs[N][M];
}
