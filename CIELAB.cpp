#include<bits/stdc++.h>
using namespace std;
// Ciel and A-B problem. CIELAB...
int main()
{ int A,B,x=0;
  cin>>A>>B;
  x=A-B;
  if(x%10==0||x%10==1)
  { x=x+1;
  }
  else
  { x=x-1;
  }
  cout<<x<<"\n";
  return 0;
}
