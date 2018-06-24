#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
// Car-pal Tunnel .... CARPTUN ....
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N;
		cin>>N;
		ll B[100005];
		for(ll i=0;i<N;i++)
		{
			cin>>B[i];
		}
		ll C,D,S;
		cin>>C>>D>>S;
		ld t=D/S;
		vector<pair<ld,ld> > A[2];
		for(ll i=0;i<2;i++)
		{
			for(ll j=0;j<N;j++)
			{
				ld in=0,out=0;
				if(i==0)
				{
					if(j==0)
					{   
						in=0;
						out=B[j];
					}
					else
					{
						in=A[i][j-1].second+t;
						out=in+B[j];
					}
				}
				else
				{
					if(j==0)
					{
						in=0;
						out=A[i-1][j].second-in+B[j]+in;
					}
					else
					{
						in=A[i][j-1].second+t;
						if(in<A[i-1][j].second)
						{
							out=A[i-1][j].second-in+B[j]+in;
						}
						else
						{
							out=in+B[j];
						}
					}
				}
				A[i].push_back(make_pair(in,out));
			}
		}
	/*	for(ll i=0;i<2;i++)
		{
			for(ll j=0;j<A[i].size();j++)
			{
				cout<<"("<<A[i][j].first<<","<<A[i][j].second<<")"<<" ";
			}
			cout<<"\n";
		}  */
		ld diff= A[1].back().second-A[0].back().second;
	//	cout<<"Difference is "<<diff<<"\n";
		ld ans = (C-1)*diff;
		cout<<fixed<<setprecision(9)<<ans<<"\n";
	}
	return 0;
}
