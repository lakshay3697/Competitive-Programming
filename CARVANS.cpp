#include<bits/stdc++.h>
using namespace std;
// Carvans. CARVANS...
int main()
{ int T,N,A[10001],x=0;
  ios_base::sync_with_stdio (false); 
  scanf("%d",&T);
  while(T--)
  { scanf("%d",&N);
    for(int i=1;i<=N;i++)
    { scanf("%d",&A[i]);
	}
	for(int i=1;i<=N;i++)
	{ if(A[i-1]<A[i]&&i-1>0)
	  { x++;
	  }
	}
	printf("%d",N-x);
	printf("\n");
	x=0;
  }
  return 0;
}
