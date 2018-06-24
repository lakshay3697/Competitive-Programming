#include<iostream>
using namespace std;
// Trapezoidal Rule.....
float func(float x)
{
	return (1/(1+x*x));
}
int main()
{ float a,b,h,t,n;
  cout<<"Enter the lower and upper limit :\n";
  cin>>a>>b;
  cout<<"Enter the number of intervals/sub-divisions :\n";
  cin>>n;
  h=(b-a)/n;
  t=func(b)+func(a);
  for(int i=1;i<n;i++)
  { 
    t=t+(2*func(a+i*h));
  }
  t=(t*h)/2;
  cout<<"The value of integral using Trapezoidal rule is : "<<t<<"\n";
  return 0;
}
