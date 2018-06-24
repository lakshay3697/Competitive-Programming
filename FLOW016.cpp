#include<bits/stdc++.h>
using namespace std;
// GCD and LCM. FLOW016...
int main()
{ int T,A,B;
  cin>>T;
  while(T--)
  { int x,y;
    cin>>A>>B;
    x=__gcd(A,B);
    y=(A*B)/x;
    cout<<x<<" "<<y<<"\n";
  }
  return 0;
}
