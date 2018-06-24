#include<bits/stdc++.h>
using namespace std;
// Count of Maximum..... MAXCOUNT.....
#define ll long long
int main()
{ ll T,N,A[101];
  cin>>T;
  while(T--)
  {
  	cin>>N;
  	ll B[10000];
  	for(ll i=1;i<=10000;i++)
  	{ B[i]=0; 
	}
  	for(ll i=1;i<=N;i++)
  	{ cin>>A[i];
    }
    for(ll i=1;i<=N;i++)
    {
    	B[A[i]]+=1;
	}
 
    ll max=0;
    for(ll i=1;i<=10000;i++)
    {  if(B[i]>max)
       {
       	 max=B[i];
	   }
    }

    ll pos=0;
    for(ll i=1;i<=10000;i++)
    { if(B[i]==max)
      { pos=i;
        break;
	  }
	}
	cout<<pos<<" "<<max<<"\n";
  }
	return 0;
}
