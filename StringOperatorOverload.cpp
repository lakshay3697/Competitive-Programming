#include<bits/stdc++.h>

using namespace std;

class string1
{
	string s,l;

	public:
		
		string operator+(string1 ob2)
		{   
		   return s+ob2.s;
		}
		string operator=(string1 ob2)
		{
			s=ob2.s;
			return s;
		}
		void operator<=(string1 ob2)
		{
			if(s>ob2.s)
				cout<<"String 1 is greater. \n";
			else
				cout<<"String 2 is greater. \n";
		}
		void length()
		{
			int i;
			for(i=0;s[i]!='\0';i++);
			cout<<"String length is "<<i<<"\n";
		}
		void toup()
		{
			for(int i=0;s[i]!='\0';i++)
			{
				int x=s[i];
				if(x>=97)
					x-=32;
				s[i]=(char)x;
			}
			display();
		}
		void tolow()
		{
			for(int i=0;s[i]!='\0';i++)
			{
				int x=s[i];
				if(x<97)
					x+=32;
				s[i]=(char)x;
			}
			display();
		}
		void display()
		{
			cout<<s<<"\n";
		}
		void set()
		{
			cin>>s;
		}
};

int main()
{
	string1 obj1,obj2;
	cout<<"Enter 1st String \n";
	obj1.set();
	cout<<"Enter 2nd String \n";
	obj2.set();
	cout<<"Displaying the two strings \n";
	cout<<"1st String is \n";
	obj1.display();
	cout<<"2nd String is \n";
	obj2.display();
	cout<<"Performing Concatenation overloading '+' operator \n";
	cout<<"The concatenated string is \n";
	string x=obj1+obj2;
	cout<<x<<"\n";
	cout<<"Comparing the two strings overloading '<=' operator \n";
    obj1<=obj2;
    cout<<"Copying the contents of String 1 into another empty String variable using '=' as overloaded operator \n";
	string1 y=obj1;
	y.display();
    cout<<"Length of First String is \n";
    obj1.length();
    cout<<"String 1 after converting Lowercase letters to Uppercase letters \n";
	obj1.toup();
	cout<<"String 1 after converting Uppercase letters to Lowercase letters \n";
	obj1.tolow();
	return 0;
}
