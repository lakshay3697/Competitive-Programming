#include<bits/stdc++.h>
using namespace std;
#define ll long long
// K-Concatenation .... KCON ...
ll maxSub_sum(ll [],ll);
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N,K,A[100005];
		cin>>N>>K;
		for(ll i=0;i<N;i++)
		{
			cin>>A[i];
		}
		ll pos=0,neg=0,sum=0,ans=0;
		for(ll i=0;i<N;i++)
		{
			sum = sum+A[i];
			if(A[i]>=0)
			{
				pos++;
			}
			else
			{
				neg++;
			}
		}
		if(pos==N)
		{
			ans=K*sum;
		}
		else if(neg==N)
		{
			ll max = A[0];
			for(ll i=1;i<N;i++)
			{
				if(A[i]>max)
				{
					max = A[i];
				}
			}
			ans = max;
		}
		else
		{
		ll B[2*N],C[3*N];
		for(ll i=0;i<N*2;i++)
		{
			B[i]=A[(i%N)];
		}
		for(ll i=0;i<N*3;i++)
		{
			C[i]=A[(i%N)];
		}
		ll s1,s2,s3;
		s1 = maxSub_sum(A,N);
		s2 = maxSub_sum(B,2*N);
		s3 = maxSub_sum(C,3*N);
//		cout<<"s1 = "<<s1<<" "<<"s2 = "<<s2<<" "<<"s3 = "<<s3<<"\n";
        if(K==1)
        {
        	ans = s1;
		}
		else if(K==2)
		{
			ans = s2;
		}
		else if(K==3)
		{
			ans = s3;
		}
		else
		{
		ans = s2+(K-2)*(s3-s2);
	    }
		}
		cout<<ans<<"\n";
	}
	return 0;
}
ll maxSub_sum(ll arr[],ll size)
{
	ll max_Cpos_seg_sum=0,Cpos_seg_sum=0;
		for(ll i=0;i<size;i++)
		{
		    Cpos_seg_sum=Cpos_seg_sum+arr[i];
				if(Cpos_seg_sum<0)
				{
					Cpos_seg_sum=0;
				}
				if(max_Cpos_seg_sum<Cpos_seg_sum)
				{
					max_Cpos_seg_sum=Cpos_seg_sum;
				}	
		}
		return max_Cpos_seg_sum;
}
