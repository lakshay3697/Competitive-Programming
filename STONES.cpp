#include<bits/stdc++.h>
using namespace std;
// Jewels and Stones. STONES...
int main()
{ int T,x=0;
  string J,S;
  cin>>T;
  while(T--)
  { cin>>J>>S;
    for(int i=0;i<S.length();i++)
    { for(int j=0;j<J.length();j++)
      { if(S[i]==J[j])
        { x++;
          break;
		}
	  }
	}
	cout<<x<<"\n";
	x=0;
  }
  return 0;
}
