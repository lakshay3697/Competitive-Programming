#include<bits/stdc++.h>
using namespace std;
class B;
class A
{ int a;
  public:
  	A()
  	{ a=0; 
	}
	A(int x)
	{ a=x;
	}
	void display()
	{ cout<<"First Number is : "<<a<<"\n";
	}
    void Max(B B1);
};
class B
{ int b;
  public:
  	B()
  	{ b=0;
    }
    B(int y)
    { b=y;
	}
	void display()
	{ cout<<"Second number is : "<<b<<"\n";
	}
	friend void A:: Max(B B1);
};
void A::Max(B B1)
{ if(a>B1.b)
  { cout<<"Maximum of the two numbers is : "<<a<<"\n";
  }
  else
  { cout<<"Maximum of the two numbers is : "<<B1.b<<"\n";
  }
}
int main()
{ int val1,val2;
  cout <<"Enter a value for the first number \n";
  cin>>val1;
  A A1(val1);
  A1.display();
  cout<<"Enter a value for the second number \n";
  cin>>val2;
  B B1(val2);
  B1.display();
  A1.Max(B1);
  return 0;
}

