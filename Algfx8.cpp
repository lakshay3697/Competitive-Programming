#inlcude<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		string s_red;
		for(ll i=0;i<s.size();i++)
		{
			s_red+=s[i];
			while((s[i+1]==s[i])&&(i+1<N))
			{
				i++;
			}
		}
		ll vnum=0;
		for(ll i=0;i<s_red.size();i++)
		{
			vnum++;
		}
		cout<<vnum<<"\n";
	}
	return 0;
}
