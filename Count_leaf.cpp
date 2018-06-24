#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
int main()
{
	ll N;
	cin>>N;
	ll A[105];ll B[N]={0};
	for(ll i=0;i<N;i++)
	{
		cin>>A[i];
	}
	ll X,x=0;
	cin>>X;
	ll hash[N]={0};
	for(ll i=0;i<N;i++)
	{
		if((i==X)||(A[i]==X||A[A[i]]==MAX))
		{
			B[i]=1;
			hash[i]=-1;
		}
	}
	for(ll i=0;i<N;i++)
	{
		if(B[i]!=1)
		{
			for(ll j=0;j<N;j++)
			{
				if(B[j]!=1)
				{
					if(A[j]==i)
					{
						hash[i]++;
					}
				}
			}
		}
	}
	for(ll i=0;i<N;i++)
	{
		if(hash[i]==0)
		{
			x++;
		}
	}
	cout<<x<<"\n";
	return 0;
}

