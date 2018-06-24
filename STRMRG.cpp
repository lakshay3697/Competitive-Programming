#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000000
//vector<ll> A1;
ll A1[MAX];
ll fin=0;
void print_interleaving(char *a , char *b ,  ll index_a ,ll index_b , char *final , ll index_final){
 
//If all characters are included in final string 
if(index_a + index_b ==strlen(a)+strlen(b)){
 	final[index_a + index_b] = '\0';
 //	cout<<final<<endl;
	ll x=0;
	for(ll i=1;i<(index_a+index_b);i++)
	{
		if(final[i]!=final[i-1])
		{
			x++;
		}
	}	
	x=x+1;
	A1[fin]=x;
	fin++;
//	A1.push_back(x);
	cout<<final<<" "<<x<<endl;
 //	A1.push_back(final);
 }
//Put a character from string a 	
 if(index_a<strlen(a)){
 	
 	final[index_final] = a[index_a];
 	
 	print_interleaving(a,b, index_a+1 , index_b , final ,index_final+1);
 }	

//Put a character from string b	
 if(index_b<strlen(b)){
 	
 	final[index_final] = b[index_b];
 	
 	print_interleaving(a,b, index_a , index_b+1 , final ,index_final+1 );
 }	
        
} 
 
int main(){

 ll T;
 cin>>T;
 while(T--)
 {
   ll N,M;
   cin>>N>>M;
   char A[5001],B[5001];
   for(ll i=0;i<N;i++)
   {
   	cin>>A[i];
   }	 
   for(ll i=0;i<M;i++)
   {
   	cin>>B[i];
   }	 
   char C[N+M];
   ll min=LLONG_MAX;
   print_interleaving(A,B,0,0,C ,0);
//  cout<<"\n";
/*   for(ll i=0;i<A1.size();i++)
   {
   	cout<<A[i]<<"\n";
   }  */
   for(ll i=0;i<fin;i++)
   {
   	cout<<A1[i]<<" ";
   }
   cout<<"\n"; 
   ll minval=A1[0];
   for(ll i=1;i<fin;i++)
   {
   	if(A1[i]<minval)
   	{
   		minval=A1[i];
	   }
   }
   cout<<minval<<"\n";
   memset(A1,sizeof(A1),0);
   fin=0;
 }

return 0;
}
