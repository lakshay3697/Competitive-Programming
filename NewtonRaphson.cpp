#include<iostream>
#include<math.h>
using namespace std;
float Func(float);
float DFunc(float);
// (MATHS) Newton Raphson method.
int main()
{ float a,b,itr,aerr,maxitr,x=0,x1=0,h=0,t=3;
  while(t--)
  { itr=1;
    cout<<"Enter the values of a, b, maxitr, aerr :-\n";
    cin>>a>>b>>maxitr>>aerr;
    if((Func(a)*Func(b))<0)
    { int flag=0;
      x=(a+b)/2;
    while(itr<=maxitr)
    { h=Func(x)/DFunc(x);
      x1=x-h;
      cout<<"At iteration number "<<itr<<" x = "<<x1<<"\n";
	  if(fabs(x-x1)<aerr)
	  { flag=1;
	    cout<<"Root is "<<x1<<" after "<<itr<<" iterations. \n";
	    break;
	  }
	  x=x1;
	  itr++;
	}
	if(flag==0)
	{ cout<<"Given maximum number of iterations is not sufficient. \n";
	}
    }
    else
    { cout<<"Either no root exist between "<<a<<" & "<<b<<" or Even number of roots exist. \n";
	}
  cout<<"\n";
  }
  return 0;
}
float Func(float y)
{ float f;
  f=y*log10(y)-1.2;
  return f;
}
float DFunc(float y)
{ float s;
  s=log10(y)+0.43429;
  return s;
}

