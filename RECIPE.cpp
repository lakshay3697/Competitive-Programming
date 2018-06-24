#include<bits/stdc++.h>
using namespace std;
// Cutting Recipes. RECIPE...
int main()
{ int T,N,A[60],g=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(int i=0;i<N;i++)
    { cin>>A[i];
	}
	g=A[0];
	for(int i=1;i<N;i++)
	{ g=__gcd(g,A[i]);
	}
	for(int i=0;i<N;i++)
	{ A[i]=A[i]/g;
	}
	for(int i=0;i<N;i++)
	{ cout<<A[i]<<" ";
	}
	cout<<"\n";
	g=0;
  }
  return 0;
}
