#include<bits/stdc++.h>
using namespace std;
// Fantastic Four. FOURSQ...
#define ll long long
int main()
{ ll T,N,Q,P,A[100001],X,Y,L,R,type=0;
  cin>>T;
  while(T--)
  { cin>>N>>Q>>P;
    for(ll i=1;i<=N;i++)
    { cin>>A[i];
	}
	for(ll i=0;i<Q;i++)
	{ cin>>type;
	  if(type==1)
	  { cin>>X>>Y;
	    A[X]=Y;
	  }
	  else
	  { ll x=1,f=0,l=0,k=0,z=0,B[6],y=0;
	    cin>>L>>R;
	    for(ll i=L;i<=R;i++)
	    { x*=A[i]%P;
		}
		x=x%P;
		f=x;
		for(ll i=0;i<4;i++)
		{ for(ll j=0;j*j<=f;j++)
		  { l=j;
		  }
		  B[k++]=l;
		  z+=pow(l,2);
		  f-=pow(l,2);
		}
		if(z==x)
		{ for(ll i=0;i<k;i++)
		  { if(B[i]>=0&&B[i]<P)
		    { y++;
			}
		  }
		  if(y==4)
		  { for(ll i=0;i<k;i++)
		  { cout<<B[i]<<" ";
		  }
		  cout<<"\n";
	      }
		  else
		  { cout<<"-1"<<"\n";
		  } 
		}
		else
		{ cout<<"-1"<<"\n";
		}
	  }
	}
  }
  return 0;
}
