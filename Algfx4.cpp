#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		string s,ans;
		cin>>s;
		ll flag=0;
		for(ll i=1;i<s.size();i++)
		{
			if(!isalpha(s[i]))
			{
				flag=1;
				break;
			}
		}
		if(isalpha(s[0]))
		{ 
			ll flag=0;
		for(ll i=1;i<s.size();i++)
		{
			if(!isalpha(s[i]))
			{
				flag=1;
				break;
			}
		}
			
			if(flag==0)
			{
			ll x=1;
			for(ll i=1;i<s.size();i++)
			{
				
				if(s[i]==s[i-1])
				{
					x++;
				}
				else
				{
					char c = x+'0';
					ans+=c;
					char n = s[i-1];
					ans+=n;
					x=1;
					if(i==(s.size()-1))
					{
					char c = x+'0';
					ans+=c;
					char n = s[i];
					ans+=n;
					x=1;
					}
				}
			}
			cout<<ans<<"\n";
		   }
			else
			{
				cout<<"VOLDEMORT"<<"\n";
			}
		}
		else
		{
			ll len = s.size();
			if(!isalpha(s[len-1]))
			{
				cout<<"VOLDEMORT"<<"\n";
			}
			else
			{
				ll val=0;
				for(ll i=0;i<s.size();i++)
				{
					if(isdigit(s[i]))
					{
						ll y=s[i]-'0';
						val=val*10+y;
					}
					else
					{
						char c=s[i];
						for(ll j=0;j<val;j++)
						{
							
							ans+=c;
						}
						val=0;
					}
				}
				cout<<ans<<"\n";
			}
		}
	}
	return 0;
}
