#include<bits/stdc++.h>
using namespace std;
// Chef and Pick Digit..... CHEFPDIG.....
#define ll long long
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		string N;
		cin>>N;
		ll A[10]={0};
		for(ll i=0;N[i]!='\0';i++)
		{
			int x = N[i]-'0';
			A[x]++;
			
		}
		ll flag=0,a=0,b=0;
		char B[26],ch=0;
		for(ll i=0;i<10;i++)
		{   
			if(A[i]>0)
			{  
			   if(A[i]<2)
			   { 
	              for(ll j=i+1;j<10;j++)
				  { if(A[j]>0)
				    {
					a=i*10+j;
					b=j*10+i;
					if(a!=b)
					{
					if(a>=65&&a<=90)
					{
						flag=1;
						B[ch++]=(char)a;
					}
					if(b>=65&&b<=90)
					{
						flag=1;
						B[ch++]=(char)b;
					}
				     }
				     else
				     {
				     	if(a>=65&&a<=90)
					{
						flag=1;
						B[ch++]=(char)a;
					}
					 }
				    }
				  }
			   }
			   else
			   {  
			   	  for(ll j=i;j<10;j++)
				  { if(A[j]>0)
				    { 
					a=i*10+j;
					b=j*10+i;
					if(a!=b)
					{
					if(a>=65&&a<=90)
					{
						flag=1;
						B[ch++]=(char)a;
					}
				    if(b>=65&&b<=90)
					{
						flag=1;
						B[ch++]=(char)b;
					}
				    }
				    else
				    {
				      if(a>=65&&a<=90)
					{
						flag=1;
						B[ch++]=(char)a;
					}	
					}
			    	}
				  }
			   }
	    	}
	    }
	    if(flag==0)
	    {
	    	cout<<" ";
		}
		else
		{    
		    sort(B,B+ch);
			for(ll i=0;i<ch;i++)
			{
				cout<<B[i];
			}
		}
		cout<<"\n"; 
    }
    return 0;
}
