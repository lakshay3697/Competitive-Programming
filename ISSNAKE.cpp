#include<bits/stdc++.h>
using namespace std;
// Is it a Snake. ISSNAKE....
#define ll long long
int main()
{ ll T,n;
  cin>>T;
  while(T--)
  { cin>>n;
    char A[2][505],flag=0,x=0;
    for(ll i=0;i<2;i++)
    { for(ll j=0;j<n;j++)
      { cin>>A[i][j];
	  }
	}
	for(ll i=0;i<2;i++)
	{ for(ll j=0;j<n;j++)
	  { 
	    if(A[i][j]=='#')
	    { A[i][j]='X';
	      if(A[i][j+1]=='#'&&j+1<n)
	      { j=j+1;
		  }
		  else if(A[i][j-1]=='#'&&j-1>=0)
		  { j=j-1;
		  }
		  else if(A[i+1][j]=='#'&&i+1<2)
		  { i=i+1;
		  }
		  else if(A[i-1][j]=='#'&&i-1>=0)
		  { i=i-1;
		  }
		  else
		  { x=1;
		    break;
		  }
		}
		else
		{ continue;
		}
		j=j-1;
	  }
	  if(x==1)
	  { break;
	  }
	}
	 for(ll i=0;i<2;i++)
	  { for(ll j=0;j<n;j++)
	    { if(A[i][j]=='#')
	      { flag=1;
	        break;
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
