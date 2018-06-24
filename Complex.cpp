#include<bits/stdc++.h>
using namespace std;
class Comp
{ int real,img;
  public:
  	Comp()
  	{ real=img=0;
	}
	Comp(int x)
	{ real=img=x;
	}
	Comp(int x,int y)
	{ real=x;
	  img=y;
	}
	void display()
	{ cout<<"Complex number is :- \n";
	  cout<<real<<"+i"<<img<<"\n";
	}
	Comp add(Comp C1,Comp C2)
	{ int l,m;
	  l=C1.real+C2.real;
	  m=C1.img+C2.img;
	  cout<<"The sum of Complex numbers is:-\n";
	  cout<<l<<"+i"<<m<<"\n";
	  
	}
};
int main()
{ int x,y,z;
  cout<<"Creating object using default constuctor\n";
  Comp C1;
  C1.display();
  cout<<"Creating object using constuctor with one argument\n";
  cout<<"Enter a value\n";
  cin>>x;
  Comp C2(x);
  C2.display();
  cout<<"Creating object using constuctor with two arguments\n";
  cout<<"Enter two values\n";
  cin>>y>>z;
  Comp C3(y,z);
  C3.display();
  cout<<"Now ading two of these complex numbers\n";
  cout<<"First complex number to be added is:-\n";
  C2.display();
  cout<<"Second complex number to be added is:-\n";
  C3.display();
  Comp C4;
  C4.add(C2,C3);
  return 0;
}
