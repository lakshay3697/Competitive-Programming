#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Points in Polygon ... POINPOLY .... Codechef : FEB-2018 - Practice ....
/* Simple logic ...... :-( .... How come i was not able to think of it during the contest ..... :-( :-( .......
   BE PHENOMENAL OR BE FORGOTTEN...... _/\_ _/\_ .....  */
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N;
		cin>>N;
		ll y= floor(N/10);
		vector<pair<pair<ll,ll>,ll> > V_group[4]; // Index 0 - x:even,y:even; Index 1 - x:odd,y:odd; Index 2 - x:even,y:odd; Index 3 - x:odd,y:even .........
		for(ll i=0;i<N;i++)
		{
			ll x,y;
			cin>>x>>y;
			if(x%2==0&&y%2==0)
			{
				V_group[0].push_back(make_pair(make_pair(x,y),i+1));
			}
			else if(x%2!=0&&y%2!=0)
			{
				V_group[1].push_back(make_pair(make_pair(x,y),i+1));
			}
			if(x%2==0&&y%2!=0)
			{
				V_group[2].push_back(make_pair(make_pair(x,y),i+1));
			}
			if(x%2!=0&&y%2==0)
			{
				V_group[3].push_back(make_pair(make_pair(x,y),i+1));
			}
		}
		for(ll i=0;i<4;i++)
		{
			for(ll j=0;j<V_group[i].size();j++)
			{
				cout<<"(("<<V_group[i][j].first.first<<","<<V_group[i][j].first.second<<"),"<<V_group[i][j].second<<")"<<" ";	
			}
			cout<<"\n";	
		}  
		ll flag=0;
		vector<pair<ll,ll> > ans;
		for(ll i=0;i<4;i++)
		{
			for(ll j=0;j<V_group[i].size();j++)
			{
				for(ll k=j+1;k<V_group[i].size();k++)
				{
					if(V_group[i][k].second!=(V_group[i][j].second+1))
					{
						ll xp=(V_group[i][j].first.first+V_group[i][k].first.first)/2;
						ll yp=(V_group[i][j].first.second+V_group[i][k].first.second)/2;
						ans.push_back(make_pair(xp,yp));
						y--;
					}
					if(y==0)
					{
						flag=1;
						break;
					}
				}
				if(flag==1)
				{
					break;
				}		
			}
			if(flag==1)
			{
				break;
			}
		}
		if(flag==1)
		{
			for(ll i=0;i<ans.size();i++)
			{
				cout<<ans[i].first<<" "<<ans[i].second<<"\n";
			}
		}
		else
		{
			cout<<"-1"<<"\n";
		}
	}
	return 0;
}
