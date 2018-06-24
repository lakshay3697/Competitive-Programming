#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int i,j,v,a[n+2];
		
		for(i=1;i<=n;i++)
		a[i] = -1;
		
		bool flag=0;
		
		while(q--)
		{
			cin>>i>>j>>v;
			if(i==j && v !=0)
			flag=1;

			if(flag==0)
			{
				if(v==0)
				{
					if(a[i] == a[j] && a[i]==-1)
					{
						a[i] = j;
						a[j] = j;	
					}	
					else if((a[i] != a[j]) && (a[i]==-1 || a[j]==-1))
					{
						if(a[i] != -1)
						a[j] = a[i];
						else a[i] = a[j];
					}
					else if((a[i] != a[j]) && (a[i]!=-1 && a[j]!=-1))
					flag = 1;
				}
				else if(v==1)
				{
					if(a[i]==a[j] && a[i]==-1)
					{
						a[i]=j-1;
						a[j]=j;
					}
					else if(a[i]==a[j] && a[i]!=-1)
					flag=1;
					else if(a[i] != a[j])
					{
						if(a[i]==a[j]+1 || a[i]==a[j]-1)
						;
						else if(a[i]==-1 || a[j]==-1)
						{
							if(a[i] != -1)
							a[j] = a[i]+1;
							else a[i] = a[j]-1;
						}
						else flag = 1;
					}
				}
			}			
		}
		if(flag==1)
		cout<<"no\n";
		else cout<<"yes\n";
	}
	return 0;
}


