#include<bits/stdc++.h>
using namespace std;
// Chef and Digits. DGTCNT.....
#define ll long long
int main()
{ std::ios::sync_with_stdio(false);
  ll T,A[10],L,R;
  cin>>T;
  while(T--)
  { cin>>L>>R;
    ll y=0;
    for(ll i=0;i<10;i++)
    { cin>>A[i];
	}
	for(ll i=L;i<=R;i++)
	{ ll x=i,flag=0,B[10]={0};
	  while(x>0)
	  { ll rem=x%10;
	       B[rem]++;
	       x=x/10;
	  }
	  for(ll j=0;j<10;j++)
	  { if(B[j]==A[j])
	    { flag=1;
	      break;
		}
	  }
	  if(flag==1)
	  { y++;
	  }
	}
	cout<<R-L+1-y<<"\n";
  }
  return 0;
}
