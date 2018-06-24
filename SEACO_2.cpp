#include<bits/stdc++.h>
using namespace std;
// Sereja and Commands ...... SEACO......
/* BE PHENOMENAL OR BE FORGOTTEN */ 
#define ll long long
#define A 100001
#define B 100000
#define MOD 1000000007
ll dp_Array[A][B];
int main()
{
	ll T,n,m,type,l,r;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		ll ** dp_Array = new ll*[m+1];
		for(ll i=0;i<m+1;i++)      // Initialisation of dp_Array
		{
				dp_Array[i]=new ll[n];
		}
		for(ll i=0;i<m+1;i++)
		{
		    for(ll j=0;j<n;j++)
		    {
		        dp_Array[i][j]=0;
		    }
		}
		cout<<"Initialised dp_Array is :-"<<"\n";
		for(ll i=0;i<m+1;i++)
		{
		    for(ll j=0;j<n;j++)
		    {
		        cout<<dp_Array[i][j]<<" ";
		    }
		    cout<<"\n";
		}
/*		ll i=1;
		for(ll k=0;k<m;k++)
		{
			cin>>type>>l>>r;
			if(type==1) // Getting the new Current state of array from previous state if query is of type 1 i.e. Simple increment by 1
			{
				dp_Array[i][l-1]=dp_Array[i-1][l-1]+1;
				if(r-1!=n-1)
				{
					dp_Array[i][r]=dp_Array[i-1][r]-1;
				}
			}
			else
			{
				for(ll j=0;j<n;j++)
				{
					dp_Array[i][j]=((dp_Array[i-1][j]%MOD+dp_Array[r][j]%MOD)%MOD-dp_Array[l-1][j]%MOD+MOD)%MOD;   // Getting the current state after i-th command 
					                                                                           // first term :- (dp_Array[i-1][j]+dp_Array[r][j]) gives the state of Array if first r commands i.e. commands from 1 to r are carried on the current state of the Array
					                                                                           // second term:-dp_Array[l-1][j] gives the state of array after first l-1 commands are applied on the initial array
					                                                                           // difference of these two terms gives the next state of array with the effect of commands between l to r carried on the currently available state 
					                                                                           
				}
			}
			i++; 
		}
	for(ll j=0;j<n;j++)
		{
			cout<<dp_Array[i-1][j]<<" ";
		}
		cout<<"\n"; */
	}
	return 0;
}
