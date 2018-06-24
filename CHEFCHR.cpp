#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Chef and his characters .... CHEFCHR ....
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		ll ans = 0;
		if(s.size()<4)
		{
			cout<<"normal"<<"\n";
		}
		else
		{
		for(ll i=0;i<=(s.size()-4);i++)
		{
			ll count_c=0,count_h=0,count_e=0,count_f=0;
			for(ll j=0;j<4;j++)
			{
				if(s[i+j]=='c')
				{
					count_c++;
				}
				else if(s[i+j]=='h')
				{
					count_h++;
				}
				else if(s[i+j]=='e')
				{
					count_e++;
				}
				else if(s[i+j]=='f')
				{
					count_f++;
				}
			}
			if((count_c==1)&&(count_h==1)&&(count_e==1)&&(count_f==1))
			{
				ans++;
			}
		}
		if(ans>0)
		{
			cout<<"lovely"<<" "<<ans<<"\n";
		}
		else
		{
			cout<<"normal"<<"\n";
		}
	}
	}
	return 0;
}
