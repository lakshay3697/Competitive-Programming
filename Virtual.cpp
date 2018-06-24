#include<bits/stdc++.h>

using namespace std;

#define n 10

class list1
{

	public:
		int a[n];
		virtual void store()=0;
		virtual void retrieve()=0;
		virtual void display()=0;
		
		
};

class stack1: public list1
{
	int top;
	public:
		stack1(): top(-1){}
		
		void store()
		{
			if(top==n-1)
				cout<<"overflow"<<endl;
			else
			{
				top++;
				cout<<"enter element: ";
				cin>>a[top];
				cout<<"\npush operation done\n";	
			}	
		}		
		
		void retrieve()
		{
			if(top==-1)
				cout<<"underflow"<<endl;
			else
			{
				top--;
				cout<<"\npop operation done\n";
			}
		}
		void display()
		{
			for(int i=0;i<=top;i++)
				cout<<a[i]<<' ';
			cout<<endl;
		}
};

class queue1: public list1
{
	int front,rear;
	public:
		queue1(): front(-1),rear(-1){}
		
		void store()
		{
			if(rear==n-1)
				cout<<"overflow";
			
			else 
			{
				if(rear==-1)
					front++;
				rear++;
				cout<<"enter element: ";
				cin>>a[rear]; 
			}
		}
		
		void retrieve()
		{
			if(front==-1)
				cout<<"underflow"<<endl;
			
			else if(front==rear)
			{
				front=-1;
				rear=-1;
				cout<<"deletion done"<<endl;
			}
			else 
			{
				front++;
				cout<<"deletion done"<<endl;
			}
		}
		void display()
		{
			for(int i=front;i<=rear;i++)
				cout<<a[i]<<' ';
			cout<<endl;
		}
		
};

int main()
{
	int t,x=1,y=1;
	cout<<"1. Stack\n2. Queue\n";
	cin>>t;
	if(t==1)
	{
	
			stack1 s;
			list1 *p=&s;
			while(x!=4)
			{	
				cout<<"1. push\n2. pop\n3. display\n4. exit\n";
				cin>>x;
				switch(x)
				{
					case 1:
						p->store();
						break;
					case 2:
						p->retrieve();
						break;
					case 3:
						p->display();
				}
			}
}
else
{

			queue1 q;
			list1 *p=&q;
			while(y!=4)
			{
			
				cout<<"1. insert\n2. delete\n3. display\n4. exit\n";
				cin>>y;
				switch(y)
				{
					case 1:
						p->store();
						break;
					case 2:
						p->retrieve();
						break;
					case 3:
						p->display();
				}
			}
	}		
	
	
}
