#include<bits/stdc++.h>
using namespace std;
// Three way communications. COMM3...
int main()
{ int T,x=0;
  float x1,y1,x2,y2,x3,y3,R,a,b,c;
  cin>>T;
  while(T--)
  { cin>>R;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    if(a>R)
    { x++;
	}
	if(b>R)
	{ x++;
	}
	if(c>R)
	{ x++;
	}
	if(x<2)
	{ cout<<"yes"<<"\n";
	}
	else
	{ cout<<"no"<<"\n";
	}
	a=0,b=0,c=0,x=0;
  }
  return 0;
}
