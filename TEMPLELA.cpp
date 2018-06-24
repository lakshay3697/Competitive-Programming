#include<bits/stdc++.h>
using namespace std;
// Temple Land. TEMPLELA...
#define ll long long
int main()
{ ll S,N,H[105];
  cin>>S;
  while(S--)
  { cin>>N;
    for(ll i=1;i<=N;i++)
    { cin>>H[i];
	}
	ll x=0,flag=0;
	if(N%2==0||(H[1]!=1))
	{ flag=1;
	}
	else
	{ x=(N/2)+1;
	  for(ll i=1;i<x;i++)
	  { if(H[i+1]-H[i]==1)
	    { continue;
		}
		else
		{ flag=1;
		  break;
		}
	  }
	  if(flag!=1)
	  { for(ll i=x+1;i<=N;i++)
	    { if(H[i-1]-H[i]==1)
	      { continue;
		  }
		  else
		  { flag=1;
		    break;
		  }
		}
	  }
	}
	if(flag==1)
	{ cout<<"no"<<"\n";
	}
	else
	{ cout<<"yes"<<"\n";
	}
  }
  return 0;
}
