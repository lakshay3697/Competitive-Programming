#include<bits/stdc++.h>
using namespace std;
// Sereja and Commands...... SEACO.....
// BE PHENOMENAL OR BE FORGOTTEN ......
#define ll long long
#define MOD 1000000007
int main()
{   
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	ll T,n,m,t,l,r;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		ll A[n]={0},B[m][4]={0}; // A[] will store resultant array after all updates, B[m][4] is the command array in which the fourth column holds the number of times that command is executed
		for(ll i=0;i<m;i++)
		{
			cin>>t>>l>>r;
			B[i][0]=t; 
		    B[i][1]=l;
		    B[i][2]=r; 
    	} 
    	ll x=1;
		for(ll i=m-1;i>=0;i--)
		{
			x=x+B[i][3];
			if(B[i][0]==2)
			{
				B[B[i][1]-2][3]=B[B[i][1]-2][3]-x;
				B[B[i][2]-1][3]=B[B[i][2]-1][3]+x;
			} 
           B[i][3]=x;
		} 
		for(ll i=0;i<m;i++)
		{
			if(B[i][0]==1)
			{
				A[B[i][1]-1]=A[B[i][1]-1]+B[i][3];
				A[B[i][2]]=A[B[i][2]]-B[i][3];
			}
		}
		ll y=0;
		for(ll i=0;i<n;i++)
		{  y=y+A[i];
		   cout<<y%MOD<<" ";
		}
		cout<<"\n";
	} 
	return 0;
}

