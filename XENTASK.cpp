#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Xenny and Alternating task. XENTASK....
int main()
{ ll T,N,X[100000],Y[100000],x=0,y=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(ll i=1;i<=N;i++)
    { cin>>X[i];
	}
	for(ll i=1;i<=N;i++)
    { cin>>Y[i];
	}
	for(ll i=1;i<=N;i++)
	{ if(i%2!=0)
	  x+=X[i];
	  else
	  x+=Y[i];
	}
  	for(ll i=1;i<=N;i++)
	{ if(i%2!=0)
	  y+=Y[i];
	  else
	  y+=X[i];
	}
	if(x<y)
	{ cout<<x<<"\n";
	}
	else
	{ cout<<y<<"\n";
	}
	x=0,y=0;
  }
  return 0;	
}
