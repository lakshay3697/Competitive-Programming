#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{ ll T,N,M,A[100005],B[100005],x=0;
  cin>>T;
  while(T--)
  { cin>>N>>M;
    ll C[N]={0};
    for(ll i=0;i<N;i++)
    { cin>>A[i];
      C[i]=1;
	}
	for(ll i=0;i<N;i++)
	{ cout<<C[i]<<" ";
	}
	cout<<"\n";
	for(ll i=0;i<M;i++)
	{ cin>>B[i];
	}
	for(ll j=0;j<M;j++)
    { if(C[B[j]]==1)
        { x++;
		}
    }
	cout<<x<<"\n";
	x=0;
  }
  return 0;
}
