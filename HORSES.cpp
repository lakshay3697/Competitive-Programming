#include<bits/stdc++.h>
using namespace std;
// Racing Horses. HORSES...
int main()
{ int T,N;
  long A[5001],min=1000000001,x=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(int i=0;i<N;i++)
    { cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{ for(int j=i+1;j<N;j++)
	  { x=fabs(A[j]-A[i]);
	    if(x<min)
	    { min=x;
		}
		x=0;
	  }
	}
	cout<<min<<"\n";
	min=1000000001;
  }
  return 0;
}
