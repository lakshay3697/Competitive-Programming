#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
// Minimum Good Permutation.......MINPERM....
#define ll long long
int main()
{
	ll T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		ll A[100005],x=1;
		for(ll i=0;i<N;i++)
		{
			A[i]=0;
		}
		if(N%2==0)
		{
			for(ll i=1;i<N;i+=2)
			{
				if(i%2!=0)
				{
					A[i]=x;
					x++;
					A[i-1]=x;
					x++;
				}
			}
		}
		else
		{
			for(ll i=1;i<N;i+=2)
			{
				if(i%2!=0)
				{
					A[i]=x;
					x++;
					A[i-1]=x;
					x++;
				}
			}
			ll temp = A[N-2];
			A[N-2] = x;
			A[N-1] = temp;
		}
		for(ll i=0;i<N;i++)
		{
			cout<<A[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

