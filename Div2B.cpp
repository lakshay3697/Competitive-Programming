#include<bits/stdc++.h>
using namespace std;
#define ll long long
// DIV2 B ..... RADIO STATION ...
int main()
{
	ll n,m;
	cin>>n>>m;
	vector<pair<string,string> > A;
	for(ll i=0;i<n;i++)
	{
		string name,ip;
		cin>>name>>ip;
		A.push_back(make_pair(name,ip));
	}
	 vector<pair<string,string> > B;
	for(ll i=0;i<m;i++)
	{
		string command,ipi;
		cin>>command>>ipi;
		ll len=ipi.size();
		string ipact=ipi.substr(0,len-1);
		B.push_back(make_pair(command,ipact));
		
	}
	for(ll i=0;i<B.size();i++)
	{
		ll flag=0;string x;
		for(ll j=0;j<A.size();j++)
		{
			if(B[i].second==A[j].second)
			{
			    x=A[j].first;
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<B[i].first<<" "<<B[i].second<<";"<<" "<<"#"<<x<<"\n";
		}
	}
	return 0;
}
