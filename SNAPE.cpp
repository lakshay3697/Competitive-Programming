#include<bits/stdc++.h>
using namespace std;
// Snape and Ladder. SNAPE...
int main()
{ int T,B,LS;
  double x=0,y=0;
  cin>>T;
  while(T--)
  { cin>>B>>LS;
    x=sqrt(pow(LS,2)-pow(B,2));
    y=sqrt(pow(LS,2)+pow(B,2));
    cout<<fixed<<setprecision(5)<<x<<" ";
    cout<<fixed<<setprecision(5)<<y<<"\n";
    x=0,y=0;
  }
  return 0;
}
