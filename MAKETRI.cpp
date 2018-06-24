#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define S 1000005
#define ll long long
ll A[S];
int main()
{ ll N,L,R,x=0,y=LLONG_MAX,z=0;
  cin>>N>>L>>R;
  for(ll i=0;i<N;i++)
  { cin>>A[i];
  }
  sort(A,A+N);
  for(ll i=1;i<N;i++)
   { x=A[i]-A[i-1];
     if(x<y)
     { y=x;
	 }
   }
   z=A[N-2]+A[N-1];
   if((y<L&&z<R)||(y>R&&z>R))
   { cout<<"0"<<"\n";
   }
   else
   {
   if(y>=L)
     { y=y+1;
	 }
   if(z<=R)
	 { z=z-1;
	 }
	 cout<<(z-y)+1<<"\n";
   }
  return 0;
}

