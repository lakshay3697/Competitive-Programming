#include<bits/stdc++.h>
using namespace std;
// Bear and Random Grid. RNDGRID....
#define ll long long
int main()
{ std::ios::sync_with_stdio(false);
  ll T,L,N;
  char B[5005],A[1005][1005];
  cin>>T;
  while(T--)
  { ll y=0;
    cin>>L>>N;
    for(ll i=0;i<L;i++)
    { cin>>B[i];
	}
	for(ll i=0;i<N;i++)
	{ for(ll j=0;j<N;j++)
	  { cin>>A[i][j];
	  }
	}
	for(ll i=0;i<N;i++)
	{ for(ll j=0;j<N;j++)
	  { ll x=0;
	    if(A[i][j]=='.')
	    { ll s=i,l=j;
	      for(ll k=0;k<L;k++)
	      { if(B[k]=='R')
	        { if(A[i][j+1]!='#'&&j+1<N)
	          { j=j+1;
	            x++;
			  }
			  else
			  break;
			}
			else if(B[k]=='L')
	        { if(A[i][j-1]!='#'&&j-1>=0)
	          { j=j-1;
	            x++;
			  }
			  else
			  break;
			}
			else if(B[k]=='U')
	        { if(A[i-1][j]!='#'&&i-1>=0)
	          { i=i-1;
	            x++;
			  }
			  else
			  break;
			}
			else
	        { if(A[i+1][j]!='#'&&i+1<N)
	          { i=i+1;
	            x++;
			  }
			  else
			  break;
			}
		  }
		  i=s,j=l;
		  y=y^x;
		  x=0;
		}
	  }
	}
	cout<<y<<"\n";
	y=0;
  }
  return 0;
}
