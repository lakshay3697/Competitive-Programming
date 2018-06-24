#include<bits/stdc++.h>
using namespace std;
// Packaging cupcakes....MUFFINS3....
#define ll long long
int main()
{ ll T,N;
  cin>>T;
  while(T--)
  {
  	cin>>N;
  	ll max=0,pos=0;
  	for(ll i=1;i<=N;i++)
  	{ ll k=N%i;
  	  if(k>=max)
  	  { max=k;
  	    pos=i;
      }
	}
	cout<<pos<<"\n";
  }
  return 0;
}
