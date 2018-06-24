#include<iostream>
using namespace std;
// Tanu and Headbob. HEADBOB...
int main()
{ int T,N,flag=0;
  char c[1005];
  cin>>T;
  for(int i=0;i<T;i++)
  { cin>>N;
    for(int i=0;i<N;i++)
    { cin>>c[i]; }
    for(int i=0;i<N;i++)
    { if(c[i]=='Y')
      { flag=1;
	    break;
	  }
      else if(c[i]=='I')
      { flag=2;
	    break;
	  }
     }
    if(flag==2)
    { cout<<"INDIAN"<<"\n"; }
    else if(flag==1)
    { cout<<"NOT INDIAN"<<"\n"; }
    else
    { cout<<"NOT SURE"<<"\n"; }
    flag=0;
   }
   return 0;
 }  
