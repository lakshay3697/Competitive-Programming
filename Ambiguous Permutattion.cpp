#include<bits/stdc++.h>
using namespace std;
// Ambiguous Permutation. PERMUTE2....
int main()
{ int N,A[100001],flag=0;
  cin>>N;
  while(N!=0)
  { for(int i=1;i<=N;i++)
    { cin>>A[i];
	}
	for(int i=1;i<=N;i++)
	{ if(i!=A[A[i]])
	  { flag=1;
	    break;
	  }
	}
	if(flag==0)
	{ cout<<"ambiguous"<<"\n";
	}
	else
	{ cout<<"not ambiguous"<<"\n";
	}
	flag=0;
	cin>>N;
  }
  return 0;
}
