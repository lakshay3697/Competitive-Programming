#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll A[500005],B[500005];
int main()
{ 
    ll T,N;
	cin>>T;
	while(T--)
	{
	  cin>>N;
	  for(ll i=0;i<N;i++)
	  {
	  	cin>>A[i];
	  }	
	  for(ll i=0;i<N;i++)
	  {
	  	cin>>B[i];
	  }
	  ll x=0;
	  ll minD=B[0];
	  for(ll i=1;i<N;i++)
	  {
	  	if(B[i]<minD)
	  	{ 
	  	  minD = B[i];
		}
	  }
//	  cout<<minD<<"\n";
	  ll maxN = 0;
	  for(ll i=0;i<N;i++)
	  {
	  	if(B[i]==minD)
	  	{
	  	  	if(A[i]>maxN)
	  	  	{
				maxN = A[i];
			}
		}
	  }
//	  cout<<maxN<<"\n";
	  ll min_mod = maxN%minD;
//	  cout<<min_mod<<"\n";
//	  cout<<"\n";
	  for(ll i=0;i<N;i++)
	  {  
	  	if(A[i]%B[i]==min_mod)
	  	{   
	  		continue;
		}
		else
		{  
			if(min_mod<A[i]%B[i])
			{   
				x=x+(B[i]-(A[i]%B[i])+min_mod);
			
			}
			else
			{
				x=x+(B[i]-(A[i]%B[i])+min_mod)%B[i];
				
			}
			
		}
	  }
	  cout<<x<<"\n";
//	  cout<<"\n";
	} 

	return 0;
}
