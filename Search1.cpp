#include<iostream>
using namespace std;
int linear_ser(int a[],int n,int val)
{	int costlin=0,flag=0;
	for(int i=0;i<n;i++)
	{
		costlin++;
		if(a[i]==val)
		{
			cout<<"Value found at index "<<i+1<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Value not found "<<endl;
	}
	return costlin;
}
int binary_ser(int a[],int n,int val)
{	int costbin=0;
	int flag=0;
	int mid=0,start=0,last=n;
	mid=(start+last)/2;
	while((start<last)&&(flag==0))
	{	mid=(start+last)/2;
		costbin++;
		if(a[mid]==val)
		{	cout<<"Value found at index "<<mid+1<<endl;
			flag=1;
		}
		else if(a[mid]>val)
		{
			last=mid;
		}
		else
		{
			start=mid;
		}
	}
	if(flag==0)
	{
		cout<<"Value not found "<<endl;
	}
	return costbin;
}
int main()
{
	int a[10],n,val;
	cout<<"Enter the size of Array (Max size 10) \n";
	cin>>n;	
	cout<<"Enter the elements of array in non descending order"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter value to search"<<endl;
	cin>>val;
	cout<<"Linear Search"<<"\n";
	int x = linear_ser(a,n,val);
	cout<<"Cost of Linear Search is "<< x <<"\n";
	cout<<"\n";
	int y = binary_ser(a,n,val);
	cout<<"Cost of Binary Search is "<< y <<"\n";
return 0;
}

