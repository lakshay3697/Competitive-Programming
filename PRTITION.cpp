#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Partition the numbers .... PRTITION .....
int main()
{
  	ll T;
	cin>>T;
	while(T--)
	{
		ll x,N;
		cin>>x>>N;
		ll sum=((N*(N+1))/2)-x;
		if(sum%2!=0||N==2||N==1)
		{
			cout<<"impossible"<<"\n";
		}
		else
		{
		    sum=sum/2;
		    char A[1000005];
		    for(ll i=0;i<N;i++)
		    {
			    A[i]='0';
		    }
		    A[x-1]='2';
		    for(ll i=N;i>0;i--)
		    {
			    if((i!=x)&&(sum-i>=0)&&((sum-i)!=x))
			    {
			    	A[i-1]='1';
			    	sum=sum-i;
				}
		    }
		    if(sum!=0)
		    {
		    	cout<<"impossible"<<"\n";
			}
			else
			{
				for(ll i=0;i<N;i++)
				{
					cout<<A[i];
				}
				cout<<"\n";
			}
	    }
	}
	return 0;
}
