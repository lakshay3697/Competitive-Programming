#include<iostream>
#include<math.h>
using namespace std;
float Func(float);
float bisect(float,float,float &);
// (MATHS) Bisection method.
int main()
{ float a,b,itr,aerr,maxitr,x=0,x1=0,t=3;
  while(t--)
 { itr=0;
  cout<<"Enter the values of a, b, maxitr, aerr :-\n";
  cin>>a>>b>>maxitr>>aerr;
  int flag=0;
  if((Func(a)*Func(b))<0)
  { x=bisect(a,b,itr);
    while(itr<maxitr)
    { 
	  if((Func(a)*Func(x))<0)
      { b=x;
	  }
	  else
	  { a=x;
	  }
	  x1=bisect(a,b,itr);
	  if(fabs(x-x1)<aerr)
	  { flag=1;
	    cout<<"Root is "<<x1<<" after "<<itr<<" iterations. \n";
	    break;
	  }
	  x=x1;
	}
	if(flag==0)
	{ cout<<"Given maximum number of iterations is not sufficient.\n";
	}
  }
  else
  { cout<<"No root exists.\n";
  }
  cout<<"\n";
  }
  return 0;
}
float Func(float y)
{ float f;
  f=pow(y,3)-4*y-9;
  return f;
}
float bisect(float a,float b,float &itr)
{ float y;
  y=(a+b)/2;
  itr++;
  cout<<"Iteration no "<<itr<<" having x = "<<y<<"\n";
  return y;
}
