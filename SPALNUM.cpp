#include<bits/stdc++.h>
using namespace std;
// Sum of Palindromic Numbers. SPALNUM...
int main()
{ int T,L,R,x=0,r=0,sum=0,y=0;
  cin>>T;
  while(T--)
  { cin>>L>>R;
    for(int i=L;i<=R;i++)
    { x=i;
      while(x!=0)
      { r=x%10;
        sum=((sum*10)+r);
        x=x/10;
	  }
	  if(sum==i)
	  { y=y+i;
	  }
	  sum=0,x=0;
	}
	cout<<y<<"\n";
	y=0;
  }
  return 0;
}
