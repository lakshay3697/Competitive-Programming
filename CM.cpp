#include<bits/stdc++.h>
using namespace std;
// Capital Movement. CAPIMOVE...
long max(long,long);
int main()
{ int T,N,V,U;
  long P[50001],B[50001],C[50001],k=0,l=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(int i=0;i<N;i++)
    { cin>>P[i];
	}
	int A[N][N];
	for(int i=0;i<N;i++)
	{ for(int j=0;j<N;j++)
	  { A[i][j]=0;
	    A[i][i]=1;
	  }
	}
	for(int i=0;i<N-1;i++)
	{ cin>>V>>U;
	  A[V-1][U-1]=1;
	  A[U-1][V-1]=1;
    }
    for(int i=0;i<N;i++)
     { long x=-1;
	  for(int j=0;j<N;j++)
      { if(A[i][j]!=1)
        { B[k++]=P[j];
          C[l++]=j;
		  x=max(x,P[j]);
		}
	  }
	if(x==-1)
	{ cout<<"0"<<" ";
	}
    else
	{ for(int i=0;i<k;i++)
     { if(B[i]==x)
        { cout<<C[i]+1<<" ";
          break;
		}
	  }
	}
    }
    cout<<"\n";
    k=0,l=0;
 }
  return 0;
}
long max(long a,long b)
{ if(a>b)
  return a;
  else
  return b;
} 
