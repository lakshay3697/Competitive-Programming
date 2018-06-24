/*7. Write a program to find inverse of given matrix using Gauss Jordan method
   2  2  3
   2  1  1
   1  3  5 */
#include<iostream>
#include<iomanip>
using namespace std;
#define N 3
int main()
{
	float A[N][N],t,I[N][N]={0};
	cout<<"Enter the matrix whose inverse is to be found :\n";
	for(int i=0;i<N;i++)
	{ for(int j=0;j<N;j++)
		{
			cin>>A[i][j];
		}
	}
	for(int i=0;i<N;i++)
	{ I[i][i]=1;
	}
	for(int j=0;j<N;j++)
	{
		for(int i=0;i<N;i++)
		{
			if(i!=j)
			{
			t=A[i][j]/A[j][j];
			for(int k=0;k<N;k++)
			{
			A[i][k]=A[i][k]-(t*A[j][k]);
			I[i][k]=I[i][k]-(t*I[j][k]);
		    }
		}
		}
	}
	cout<<"Diagonal matrix is:\n";
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<fixed<<setprecision(3)<<A[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Inverse of given matrix is :\n";
	for(int i=0;i<N;i++)
	{    
	for(int j=0;j<N;j++)
		I[i][j]=I[i][j]/A[i][i];
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{ cout<<fixed<<setprecision(3)<<I[i][j]<<"\t";
     	}
		cout<<"\n";
	}
	return 0;
}
