#include<bits/stdc++.h>
using namespace std;
// Similar dishes. SIMDISH....
#define ll long long 
int main()
{ ll T,x=0,flag=0;
  string A[4],B[4];
  cin>>T;
  while(T--)
  { for(ll i=0;i<4;i++)
    { cin>>A[i];
	}
	for(ll i=0;i<4;i++)
	{ cin>>B[i];
	}
	for(ll i=0;i<4;i++)
	{ for(ll j=0;j<4;j++)
	  { if(!A[i].compare(B[j]))
	    { x++;
	      break;
		}
	  }
	  if(x==2)
	  { flag=1;
	    break;
	  }
	}
	if(flag==1)
	{ cout<<"similar"<<"\n";
	}
	else
	{ cout<<"dissimilar"<<"\n";
	}
	x=0,flag=0;
  }
  return 0;
}
