#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{ ll T,N,M,len=0,x=0;
  string A;
  cin>>T;
  while(T--)
  { string s;
    cin>>A>>N>>M;
    for(ll i=0;i<N;i++)
    { s=s+A;
	}
	for(ll i=0;s[i]!='\0';i++)
	{ x=(x*10+(s[i]-'0'))%M;
	}
	cout<<x<<"\n";
	x=0;
  }
  return 0;
}
