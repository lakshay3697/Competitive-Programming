#include<bits/stdc++.h>
using namespace std;
// Stable Market. SMARKET....
#define ll long long 
int main()
{ ll T,N,Q,A[100005],L,R,K;
  cin>>T;
  while(T--)
  { cin>>N>>Q;
    for(ll i=1;i<=N;i++)
    { cin>>A[i];
	}
	for(ll i=0;i<Q;i++)
	{ cin>>L>>R>>K;
	  ll x=1,nb=0;
	  for(ll j=L;j<=R;j++)
	  { if((A[j]==A[j+1])&&((j+1)<=R))
	    { x++; 
		}
		else
		{ if(x>=K)
		  { nb++;
		  }
		  x=1;
		}
	  }
	  cout<<nb<<"\n";
	  nb=0;
	}
  }
  return 0;
}
