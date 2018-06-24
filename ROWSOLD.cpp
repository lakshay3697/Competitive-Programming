#include<bits/stdc++.h>
using namespace std;
// Bear and Row 01. ROWSOLD....
#define ll long long
int main()
{ ll T;
  string A;
  cin>>T;
  while(T--)
  { cin>>A;
	ll one=0,zero=0,x=0;
	for(ll i=0;i<A.size();i++)
	{ 
	  if(A[i]=='1')
	  { 
	   one++;
	  }
	  else
	  { ll j=i;
	    while(A[j]=='0'&&j<A.size())
	    { zero++;
	      j++;
		}
		x=x+(one*(zero+1));
		i=j-1;
		zero=0;
	  }
	}
	cout<<x<<"\n";
  }
  return 0;
}

