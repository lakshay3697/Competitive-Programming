#include<bits/stdc++.h>
using namespace std;
// Snake Procession. SNAKPROC....
#define ll long long
int main()
{ ll R,L;
  char A[1000];
  cin>>R;
  while(R--)
  { cin>>L;
    for(ll i=0;i<L;i++)
    { cin>>A[i];
	}
	ll h=0,t=0,flag=0;
	for(ll i=0;i<L;i++)
	{ if(A[i]=='.')
	  { continue;
	  }
	  else
	  { if(A[i]=='H')
	    { if(h==0)
	      { h=1;
		  }
		  else
		  { flag=1;
		    break;
		  }
		}
		else
    	{ if(h!=0)
		  { t=0;
		    h=0;
		  }
		  else
		  { flag=1;
		    break;
		  }
		}
	  }
	}
	if(flag==1||h!=0||t!=0)
	{ cout<<"Invalid"<<"\n";
	}
	else
	cout<<"Valid"<<"\n";
  }
  return 0;
}
