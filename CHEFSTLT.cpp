#include<bits/stdc++.h>
using namespace std;
// Chef and Two Strings. CHEFSTLT...
int main()
{ int T,x=0,y=0,len=0;
  string S1,S2;
  cin>>T;
  while(T--)
  { cin>>S1>>S2;
    len=S1.length();
    for(int i=0;i<len;i++)
    { if((S1[i]!=S2[i])&&S1[i]!='?'&&S2[i]!='?')
      { x++;
	  }
	  if((S1[i]==S2[i])&&S1[i]!='?'&&S2[i]!='?')
	  { y++;
	  }
	}
	cout<<x<<" "<<len-y<<"\n";
	x=0,y=0,len=0;
  }
  return 0;
}
