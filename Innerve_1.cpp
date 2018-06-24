#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{  double T,u,v,X;
   cin>>T;
   while(T--)
   {
   	 cin>>u>>v>>X;
   	 cout<<fixed<<setprecision(8)<<(X/(u+v))<<"\n";
   }
	return 0;
}
