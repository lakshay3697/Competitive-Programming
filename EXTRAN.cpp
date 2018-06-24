#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Bear and Extra Number. EXTRAN....
int main()
{ ll T,N,A[100001];
  cin>>T;
  while(T--)
  { cin>>N;
    for(ll i=0;i<N;i++)
    { cin>>A[i];
	}
	sort(A,A+N);
	for(ll i=1;i<N;i++)
	{ if((A[i]-A[i-1])!=1)
	  { if(i!=N-1)
	    cout<<A[i-1]<<"\n";
	    break;
	  }
	  else
	  { cout<<A[N-1]<<"\n";
	    break;
      }
	}
  }
  return 0;
}
