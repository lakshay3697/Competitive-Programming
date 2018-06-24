#include<iostream>
#include<math.h>
using namespace std;
double f(double x,double y)
{
	return(pow(y,2)+x);
}
int main()
{
	double xo,xn,yo,x,y,i,j,k,k1,k2,k3,k4,h;
	cout<<"Enter the Values of xo,yo,xn,h :\n";
	cin>>xo>>yo>>xn>>h;
	x=xo;
	y=yo;
	for(i=xo;i<xn;i+=h)
	{
		k1=h*f(x,y);
		k2=h*f(x+(h/2),y+(k1/2));
		k3=h*f(x+(h/2),y+(k2/2));
		k4=h*f(x+h,y+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		x=x+h;
		y=y+k;
		cout<<"The value of y at x = "<<x<<"is : "<<y<<"\n";
	}
	return 0;
}
