#include<bits/stdc++.h>
using namespace std;
#define n 3
int main()
{
	int maxitr;
	float aerr,a[n][n],x[n],maxerr=0,max1=0,l=0,newx[n]={0},prevl=0;
	cout<<"Enter maximum iteration and allowed error : \n";
	cin>>maxitr>>aerr;
	cout<<"\nEnter augmented matrix :\n";
	for(int i=0;i<n;i++)
		{	for(int j=0;j<n;j++)
				cin>>a[i][j];	}
	cout<<"\nEnter initial approximation of eigen vector : \n";
	for(int i=0;i<n;i++)
		cin>>x[i];
	cout<<"\nIteration   Eigen value \t\t Eigen vectors \n";
	for(int i=0;i<maxitr;i++)
	{
		maxerr=0;
		max1=0;
		for(int j=0;j<n;j++)
		{
			newx[j]=0;
			for(int k=0;k<n;k++)
				newx[j]=newx[j]+a[j][k]*x[k];
			max1=max(max1,fabs(newx[j]));
		}
	    l=max1;
	maxerr=max(maxerr,fabs(prevl-l));
	prevl=l;
	    for(int u=0;u<n;u++)
			newx[u]=newx[u]/l;
	    for(int p=0;p<n;p++)
		{
			maxerr=max(maxerr,fabs(x[p]-newx[p]));
			x[p]=newx[p];
		}
		cout<<setw(14)<<left<<i<<setw(20)<<left<<l;
		for(int i=0;i<n;i++)
			cout<<setw(12)<<left<<x[i];
		cout<<endl;
		if(maxerr<aerr)	break;
	}
	cout<<"\nThe required eigen value is : "<<l;
	cout<<"\nThe required eigen vector is :\n";
	for(int i=0;i<n;i++)
		cout<<x[i]<<"\t";
	return 0;
}

