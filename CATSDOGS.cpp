#include<bits/stdc++.h>
using namespace std;
// Cats and Dogs. CATSDOGS...
int main()
{ int T;
  long long C,D,L;
  cin>>T;
  while(T--)
  { cin>>C>>D>>L;
    if(L%4!=0)
    { cout<<"no"<<"\n";
	}
	else
	{ 
	  if(L==4*D+4*C)
	  { cout<<"yes"<<"\n";
	    continue;
	  }
	  else if(L>4*D+4*C)
	  { 
	    cout<<"no"<<"\n";
	    continue;
	  }
	  else if(L<4*D+4*C)
	  { if(L<4*D)
	    { cout<<"no"<<"\n";
		}
		else
		{ if(C<=2*D)
		  { cout<<"yes"<<"\n";
		  }
		  else
		  { if(L+4*D>=4*C)
		    { cout<<"yes"<<"\n";
			}
			else
			{ cout<<"no"<<"\n";
			}
		  }
		}
	  }
    }
  }
  return 0;
}
