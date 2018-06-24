#include<bits/stdc++.h>
using namespace std;
// Fill the matrix ...... FILLMTR.....
#define ll long long
int main()
{
	ll T,N,Q,i,j,val;
	cin>>T;
	while(T--)
	{
		cin>>N>>Q;
		ll ** A = new ll*[N];
		for(ll a=0;a<N;a++)
		{
			A[a]= new ll[N];
		}
		for(ll a=0;a<N;a++)
		{
		    for(ll b=0;b<N;b++)
		    {
		        A[a][b]=-1;
		    }
		}
/*		cout<<"2-D Array after initialisation"<<"\n";
		for(ll a=0;a<N;a++)
		{
		    for(ll b=0;b<N;b++)
		    {
		        cout<<A[a][b]<<" ";
		    }
		    cout<<"\n";
		}  */
		ll flag=0;
		while(Q--)
		{
			cin>>i>>j>>val;
			if(i==j)
			{
				if(val!=0)
				{
					flag=1;
					break;
				}
				else
				{
					A[i-1][i-1]=0;
				}
			}
			else
			{
			    if(A[j-1][i-1]==-1)
			    {
			    	A[i-1][j-1]=A[j-1][i-1]=val;
				}
				else
				{
					if(A[j-1][i-1]!=val)
					{
						flag=1;
						break;
					}
				} 
		    }
		}  
		            for(ll a=0;a<N;a++)
		  		    {
				    	for(ll b=0;b<N;b++)
				    	{
				    		
					for(ll k=a;k<b;k++)
					{    
					    if(A[a][b]!=-1)
					    {   
					        if(A[a][k]!=-1&&A[k][b]!=-1)
					        {
							if(A[a][k]==1)
							{
								if(A[k][b]==1)
								{
									if(A[a][b]==1)
									{
										flag=1;
										break;
									}
									else
									continue;
								}
								else
								{
									if(A[a][b]==0)
									{
										flag=1;
										break;
									}
									else
									continue;
								}
							}
							else
							{
							    if(A[k][b]==0)
								{
									if(A[a][b]==1)
									{
										flag=1;
										break;
									}
									else
									continue;
								}
								else
								{
									if(A[a][b]==0)
									{
										flag==1;
										break;
									}
									else
									continue;
								}
							}
						  }
						  else if(A[a][k]==-1&&A[k][b]!=-1)
						{
						    if(A[a][b]==0)
						    {
						        if(A[k][b]==0)
						        {
						            A[a][k]=0;
						        }
						        else
						        {
						            A[a][k]=1;
						        }
						    }
						    else
						    {
						        if(A[k][b]==0)
						        {
						            A[a][k]=1;
						        }
						        else
						        {
						            A[a][k]=0;
						        }
						    }
						}
						else if(A[a][k]!=-1&&A[k][b]==-1)
						{
						    if(A[a][b]==0)
						    {
						        if(A[a][k]==0)
						        {
						            A[k][b]=0;
						        }
						        else
						        {
						            A[k][b]=1;
						        }
						    }
						    else
						    {
						        if(A[a][k]==0)
						        {
						            A[k][b]=1;
						        }
						        else
						        {
						            A[k][b]=0;
						        }
						    }
						}
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
/*		for(ll a=0;a<N;a++)
		{
		    for(ll b=0;b<N;b++)
		    {
		        cout<<A[a][b]<<" ";
		    }
		    cout<<"\n";
		}     */
		if(flag==1)
		{
			cout<<"no"<<"\n";
		}
		else
		{
			cout<<"yes"<<"\n";
		}
	}
	return 0;
}
