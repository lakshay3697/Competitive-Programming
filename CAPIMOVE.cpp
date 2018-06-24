#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define gc getchar_unlocked
int rt()
{
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{ int T,N,V,U;
  long P[50001];
  T=rt();
  while(T--)
  { N=rt();
    for(int i=0;i<N;i++)
    { cin>>P[i];
	}
	int A[N][N]={0};
	for(int i=0;i<N;i++)
	{ 
	   A[i][i]=1;
	}
	for(int i=0;i<N-1;i++)
	{ V=rt();
	  U=rt();
	  A[V-1][U-1]=1;
	  A[U-1][V-1]=1;
    }
    for(int i=0;i<N;i++)
     { long x=-1,pos=-1;
	  for(int j=0;j<N;j++)
      { if(A[i][j]!=1)
        { if(P[j]>x)
          { x=P[j];
            pos=j;
		  }
		}
	  }
	if(pos==-1)
	{ cout<<"0"<<" ";
	}
    else
	{ cout<<pos+1<<" ";
	}
    }
    cout<<"\n";
 }
  return 0;
}

