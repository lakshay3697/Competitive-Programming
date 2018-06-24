#include<bits/stdc++.h>
using namespace std;
template <class T>
class biggest
{ T num1,num2;
  public:
  	biggest(T n1, T n2)
  	{ num1=n1;
	  num2=n2; 
	}
	void display()
	{ cout<<big()<<" is larger of the two entered numbers.\n";
	}
	T big()
	{ return (num1>num2)?num1:num2;
	}
	~biggest()
	{ cout<<"Object is destroyed.\n";
	}
};
int main()
{ int x,y;
  float l,m;
  cout<<"Enter two integer numbers :-\n";
  cin>>x>>y;
  biggest<int>B1(x,y);
  cout<<"Integer result :-\n";
  B1.display();
  cout<<"Enter two float numbers :-\n";
  cin>>l>>m;
  biggest<float>B2(l,m);
  cout<<"Float Results :-\n";
  B2.display(); 
  return 0;
}
