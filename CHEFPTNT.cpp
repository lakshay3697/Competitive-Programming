#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Chef and the patents .... CHEFPTNT ...
ll min(ll,ll);
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N,M,X,K;
		cin>>N>>M>>X>>K;
		string S;
		cin>>S;
	/*	if((M==0)||(X==0)||(K<N))
		{
			cout<<"no"<<"\n";
		} */
	//	else
	//	{
			ll e=0,o=0;
			for(ll i=0;i<S.length();i++)
			{
				if(S[i]=='E')
				{
					e++;
				}
				else
				{
					o++;
				}
	    	}
	    	for(ll i=1;i<=M;i++)
	    	{
	    		if((((e==0)&&(o==0)))||(N==0))
	    		{
					break;
				}
				else
				{
					if(i%2!=0)
	    			{
	    				N=N-min(X,o);
	    				o=o-min(X,o);
	    			}
	    			else
	    			{
	    				N=N-min(X,e);
	    				e=e-min(X,e);
					}
				}
			}
			if(N==0)
			{
				cout<<"yes"<<"\n";
			}
			else
			{
				cout<<"no"<<"\n";
			}
	//	}
	}
	return 0;
}
ll min(ll a,ll b)
{
	if(a<b)
	return a;
	else
	return b;
}
