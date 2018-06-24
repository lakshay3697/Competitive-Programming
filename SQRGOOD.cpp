#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Simplify the square root ... SQRGOOD ...
// Seive of atkin idea taken from ... https://www.geeksforgeeks.org/sieve-of-atkin/ .....
#define MAX 1000000
bool A[MAX];
  
int main()
{
    for (int i=1; i<=MAX; i++)
        A[i] = false;
 
    
    for (int x = 1; x*x <=MAX; x++)
    {
        for (int y = 1; y*y <=MAX; y++)
        {
            int n = (4*x*x)+(y*y);
            if (n <= MAX && (n % 12 == 1 || n % 12 == 5))
                A[n] ^= true;
 
            n = (3*x*x)+(y*y);
            if (n <= MAX && n % 12 == 7)
                A[n] ^= true;
 
            n = (3*x*x)-(y*y);
            if (x > y && n <= MAX && n % 12 == 11)
                A[n] ^= true;
        }
    }
    for (int r = 5; r*r <=MAX; r++)
    {
        if (A[r])
        {
            for (int i = r*r; i <=MAX; i += r*r)
                A[i] = false;
         }
    }
   // cout<<A[1]<<"\n";
  ll n;
  cin>>n;
  ll x=0;
  for(ll i=4;i<=MAX;i++)
  {
  	if(A[i]==false)
  	{
  		if(n!=0)
  		{
  		for(ll j=2;j<=i/2;j++)
  		{
  		   if(i%(j*j)==0)
		   {
		   	x=i;
		   	n--;
			break;
		   }	
		}
	    }
    }
    if(n==0)
    {
    	break;
	}
  }
  cout<<x<<"\n";
    return 0;
}
