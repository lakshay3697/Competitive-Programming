#include<bits/stdc++.h>
using namespace std;
// Cleaning Up. CLEANUP...
int main()
{ int T,m,n,A[1001],C[1001],k=0;
  bool B[1001];
  cin>>T;
  while(T--)
  { cin>>n>>m;
    memset(B,1,n+1);
    for(int i=0;i<m;i++)
    { cin>>A[i];
	}
	for(int i=0;i<m;i++)
	{ for(int j=1;j<=n;j++)
	  { if(j==A[i])
        { B[j]=0;
		}
	  }
	}
	for(int i=1;i<=n;i++)
	{ if(B[i]==1)
	  { C[k]=i;
	    k++;
	  }
	}
	for(int j=0;j<k;j=j+2)
	{ cout<<C[j]<<" ";
	}
	cout<<"\n";
	for(int j=1;j<k;j=j+2)
	{ cout<<C[j]<<" ";
	}
	cout<<"\n";
	k=0;
  }
  return 0;
}
