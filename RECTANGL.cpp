#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Rectangle.....RECTANGL
int main()
{
	ll T,a,b,c,d;
	cin>>T;
	while(T--)
	{
		cin>>a>>b>>c>>d;
		if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
