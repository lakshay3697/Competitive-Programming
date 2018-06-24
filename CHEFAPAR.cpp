#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{ std::ios::sync_with_stdio(false);
  ll T,N,A[100005],x=0,y=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(ll i=0;i<N;i++)
    { cin>>A[i];
	}
	for(ll i=0;i<N;i++)
	{ if(A[i]==0)
	  { x++;
	    y+=1100;
	  }
	  else
	  { if(x>0)
	    { y+=100;
		}
	  }
	}
	cout<<y<<"\n";
	x=0,y=0;
  }
  return 0;
}
