#include<bits/stdc++.h>
using namespace std;
// Little Elephant and Permutations. LEPERMUT...
int main()
{ int T,N,A[101],x=0,y=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(int i=0;i<N;i++)
    { cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{ for(int j=i+1;j<N;j++)
	  { if(A[i]>A[j])
	    { x++;
		}
	  }
	}
	for(int i=0;i<N;i++)
	{ if(A[i]>A[i+1]&&i+1<N)
	  { y++;
	  }
	}
	if(x==y)
	{ cout<<"YES"<<"\n";
	}
	else
	{ cout<<"NO"<<"\n";
	}
	x=0,y=0;
  }
  return 0;
}
