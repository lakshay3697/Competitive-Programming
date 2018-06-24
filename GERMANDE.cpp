#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000005 
ll A[MAX];
int main()
{ std::ios::sync_with_stdio(false);
  ll T,o1,o2,N=0,zero,one;
  cin>>T;
  while(T--)
  { cin>>o1>>o2;
    N=o1*o2;
    for(ll i=1;i<=N;i++)
    { cin>>A[i];
	}
	if(o2==1)
	{ for(ll i=1;i<=N;i++)
	  { if(A[i]==0)
	    { zero++;
		}
		else
		{ one++;
		}
	  }
	  if(zero>one)
	  { cout<<"0"<<"\n";
	  }
	  else
	  { cout<<"1"<<"\n";
	  }
	  zero=0,one=0;
	}
	else
	{ ll Sum1[N+1],sum=0;
	  for(ll i=0;i<=N;i++)
	  { Sum1[i]=0;
	  }
	  for(ll i=1;i<=N;i++)
	  { Sum1[i]=Sum1[i-1]+A[i];
	    sum+=A[i];
	  }
	  ll flag=0,y=0,x=0;
	  for(ll i=1;i<=o2;i++)
	  { ll oneg=0,zerog=0;
	    for(ll j=i;j<=N;j+=o2)
	    { y=j+o2-1;
	      if(y<=N)
	      { x=Sum1[j+o2-1]-Sum1[j-1];
		  }
		  else
		  { x=sum-(Sum1[j-1]-Sum1[(j+o2-1)%N]);
		  }
		  if(x>floor(o2/2))
		  { oneg++;
		  }
		  else
		  { zerog++;
		  }
		}
		if(oneg>zerog)
		{ 
		  flag=1;
		  break;
		}
		else
		{ continue;
		}
	  }
	  if(flag==1)
	  { cout<<"1"<<"\n";
	  }
	  else
	  { cout<<"0"<<"\n";
	  }
	}
  }
  return 0;
} 
