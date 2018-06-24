#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{ ll N,M,A[100005],L,R,k;
  cin>>N>>M;
  for(ll i=1;i<=N;i++)
  { cin>>A[i];
  }
  while(M--)
  { cin>>L>>R>>k;
     if(N==1)
      { cout<<A[1]<<"\n";
	  }
	  else
	{ ll x=1,y=0,flag=0;
	  for(ll i=L;i<=R;i++)
	  {
		if(A[i]==A[i+1])
        { y=A[i];
	      x++;
          if(x>=k)
          { flag=1;
		  break;
		  }
	    }
	    else
	    { x=1;
	    }
      }
	if(flag==1)
	{ cout<<y<<"\n";
	}
	else
	{ cout<<"-1"<<"\n";
	}
    }
    }
  return 0;
}
