#include<bits/stdc++.h>
using namespace std;
// Little Chef and Sums ...... CHEFSUM......
#define ll long long
ll B[10005]={0},C[100005]={0};
int main()
{
	ll T,N,A[100005];
	cin>>T;
	while(T--)
	{
		cin>>N;
		for(ll i=0;i<N;i++)
		{
			cin>>A[i];
		}
		ll y=0;
		for(ll i=0;i<N;i++)
		{
			y=y+A[i];
			B[i]=y;
		}
		for(ll i=0;i<N;i++)
		{   
		    if(i==0||i==N-1)
		    {
		    	C[i]=A[i]+B[N-1];
			}
			else
			{
			  C[i]=B[i]+B[N-1]-B[i-1];	
			}
	    }
	    ll min=C[0];
	    for(ll i=1;i<N;i++)
	    {
	    	if(C[i]<min)
	    	{
	    		min=C[i];
			}
		}
		ll l = 0;
		for(ll i=0;i<N;i++)
		{
			if(C[i]==min)
			{
				l=i;
				break;
			}
		}
		cout<<l+1<<"\n";
	}
	return 0;
}
