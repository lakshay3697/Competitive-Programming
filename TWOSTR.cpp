#include<bits/stdc++.h>
using namespace std;
// Chef and the Wildcard matching. TWOSTR...
int main()
{ int T,flag=0,x;
  string X,Y;
  cin>>T;
  while(T--)
  { cin>>X>>Y;
    x=X.length();
    for(int i=0;i<x;i++)
	{ if(!((X[i]==Y[i])||(X[i]=='?'&&Y[i]!='?')||(Y[i]=='?'&&X[i]!='?')))
	  { flag=1;
	    break; 
	  } 
    }
	if(flag==1)
	{ cout<<"No"<<"\n";
    } 
    else
    { cout<<"Yes"<<"\n";
	}
	flag=0;
  } 
  return 0;
}
