#include<bits/stdc++.h>
using namespace std;
// Task Distribution....UEMP02....
#define ll long long
int main()
{ ll N,M;
  cin>>N>>M;
  ll x =(N*(N+1))/2;
  if(x==M)
  cout<<"possible"<<"\n";
  else
  cout<<"impossible"<<"\n";
  return 0;
}
