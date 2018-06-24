#include<bits/stdc++.h>
using namespace std;
// The Smallest Pair. SMPAIR...
int main()
{ int T,N,A[100001],small=0,pos=0,temp=0,x=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(int i=0;i<N;i++)
    { cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{ small=A[i];
	  pos=i;
	  for(int j=i+1;j<N;j++)
	  { if(A[j]<small)
	    { small=A[j];
	      pos=j;
		}
	  }
	  temp=A[i];
	  A[i]=A[pos];
	  A[pos]=temp;
	}
	x=A[0]+A[1];
	cout<<x<<"\n";
	x=0;
  }
  return 0;
}
