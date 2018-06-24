#include<iostream>
#include<string>
using namespace std;
#define ll long long
// Little Monk and Good String....
int main()
{   
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin>>s;
	ll len = s.length();
	ll x=0,max_l=0,flag=0;
	for(ll i=0;i<len;i++)
	{   
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{   
			x=x+1;
			if(x==len)
		    {
		    	cout<<x<<"\n";
		    	flag=1;
		    	break;
			}
		}
		else
		{  
				if(x>max_l)
				{
				max_l = x;
				x=0;
			    }
		}
	}
	if(flag==0)
	{
	cout<<max_l<<"\n";
    }
	return 0;
}
