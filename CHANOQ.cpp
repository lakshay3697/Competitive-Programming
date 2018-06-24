#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Chef and Odd Queries .... CHANOQ ....
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N;
		cin>>N;
		ll A[N][2]={0};
		for(ll i=0;i<N;i++)
		{
				ll L,R;
				cin>>L>>R;
				A[i][0]=L;
				A[i][1]=R;
		}
		ll Q;
		cin>>Q;
		for(ll i=0;i<Q;i++)
		{
			ll M;
			cin>>M;
			ll B[M];
			for(ll j=0;j<M;j++)
			{
				ll X;
				cin>>X;
				B[j]=X;
			}
			ll gs=0;
			for(ll i=0;i<N;i++)
			{
				ll np=0;
				for(ll j=0;j<M;j++)
				{
					if((A[i][0]<=B[j])&&(A[i][1]>=B[j]))
					{
						np++;
					}
				}
				if(np%2!=0)
				{
					gs++;
				}
			}
			cout<<gs<<"\n";
		}
	}
	return 0;
}
