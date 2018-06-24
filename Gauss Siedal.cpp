#include<bits/stdc++.h>
using namespace std;
#define n 3
int main()
{
	int maxitr;
	float aerr,a[n][n+1],x[n]={0},maxerr=0,prev;
	cout<<"Enter maximum iteration & allowed error : \n";
	cin>>maxitr>>aerr;
	cout<<"\nEnter the augmented matrix :\n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n+1;j++)
			cin>>a[i][j];
	for(int i=0;i<maxitr;i++)
	{
		maxerr=0;
		for(int j=0;j<n;j++)
		{
			float s=0;
			for(int k=0;k<n;k++)
			{
			if(j!=k)
			{
				s+=a[j][k]*x[k];
			}
			}
			if(i!=0)
				prev=x[j];
			x[j]=(a[j][n]-s)/a[j][j];
			maxerr=max(maxerr,fabs(x[j]-prev));
		}
	cout<<"\nIteration "<<i+1<<" Values of x,y,z are : ";
		for(int q=0;q<n;q++)
			cout<<x[q]<<"  ";
		cout<<endl;
		if(maxerr<aerr)
			break;
	}
	cout<<"\nFinal result is : \n";
	for(int i=0;i<n;i++)
	cout<<x[i]<<"\n";
return 0;
}

