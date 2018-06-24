#include<bits/stdc++.h>
using namespace std;
// Dish of life. DISHLIFE....
#define ll long long
int main()
{ ll T,N,K,P;
  cin>>T;
  while(T--)
  { ll z,flag=0,l=0,x=0;
	cin>>N>>K;
    ll A[K];
    for(ll i=1;i<=K;i++)
    { A[i]=0;
	}
    for(ll r=1;r<=N;r++)
    { 
	  cin>>P;
      ll B[P];
      for(ll i=1;i<=P;i++)
      { cin>>B[i];
	  }
	  if(flag==0)
	  {
	  for(ll i=1;i<=P;i++)
	  { if(A[B[i]]==0)
	    { A[B[i]]=1; 
	      x++;
	    }
	  }
	  if(x==K)
	  { 
	    flag=1;
	    l=r;
	  }
     }
     else
     continue;
	}
    if(flag==1)
    { if(l==N)
      { cout<<"all"<<"\n";
	  }
	  else
	  { cout<<"some"<<"\n";
	  }
	}
	else
	{ cout<<"sad"<<"\n";
	}
  }
  return 0;
}
