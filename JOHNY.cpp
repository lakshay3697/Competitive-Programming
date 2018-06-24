#include<bits/stdc++.h>
using namespace std;
// Uncle Johny. JOHNY...
int main()
{ int T,N,K;
  long A[101],y=0,small=0,pos=0,temp=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(int i=1;i<=N;i++)
    { cin>>A[i];
	}
	cin>>K;
	y=A[K];
	for(int i=1;i<=N;i++)
	{ small=A[i];
	  pos=i;
	  for(int j=i+1;j<=N;j++)
	  { if(A[j]<small)
	    { small=A[j];
	      pos=j;
		}
	  }
	  temp=A[i];
	  A[i]=A[pos];
	  A[pos]=temp;
	}
	for(int i=1;i<=N;i++)
	{ if(A[i]==y)
	  { cout<<i<<"\n";
	    break;
	  }
	}
	y=0;
  }
  return 0;
}
