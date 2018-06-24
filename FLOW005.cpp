#include<bits/stdc++.h>
using namespace std;
// Smallest number of notes. FLOW005...
int main()
{ int T,N,A[6]={1,2,5,10,50,100},x=0;
  cin>>T;
  while(T--)
  { cin>>N;
    for(int i=5;i>=0;i--)
      {   x=x+N/A[i];
          N=N%A[i];
	  }
	cout<<x<<"\n";
    x=0;
  }
  return 0;
}
