#include<bits/stdc++.h>
using namespace std;
// Chef and Divisor Tree. CHEFDIV....
#define ll long long
#define N 1000000
ll D[N]={0};
int main()
{ std::ios::sync_with_stdio(false);
  
  for(ll k=2;k<=N;k++)
  { ll cnt=0;
  for(ll i=1;i<=sqrt(k);i++)
   { 
     if(k%i==0)
    { if(k/i==i||k/i==k)
      { cnt++;
	  }
	  else
	  cnt=cnt+2;
	}
   }
   D[k]=cnt;
  }
  for(ll i=1;i<=N;i++)
  { cout<<D[i]<<" ";
  }
  cout<<"\n";
  ll A,B,x=0;
  cin>>A>>B;
  for(ll i=A;i<=B;i++)
  { ll y=0;
    ll z=0,flag=0,s=i;
    while(s>1)
    { 
	  ll d=0,max=0,pos=0;
      d=D[s];
      for(ll j=1;j<=sqrt(s);j++)
      { if(s%j==0)
        { 
		  if(s/j==j||s/j==s)
          { if(D[j]>max)
            { max=D[j];
              pos=j;
			}
		  }
		else
		{
		  if(D[j]>max)
		  { max=D[j];
		    pos=j;
		  }
		  if(D[s/j]>max)
		  { max=D[s/j];
		    pos=s/j;
		  }
    	}
		}
	  }
	  if(flag==0)
	  { z+=d;
	  }
	  else
	  { z+=d+1;
	  }
	  flag=1;
	  s=pos;;
	}
	if(i!=1)
    { z+=1; }
	x+=z;
  }
  cout<<x<<"\n";
  return 0;
}

