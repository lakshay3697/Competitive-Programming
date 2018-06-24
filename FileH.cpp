#include<bits/stdc++.h>
using namespace std;
class student_info
{ char name[20];
  int age;
  char sex;
  float height,weight;
  public:
  	void getchar();
  	void display();
};
void student_info::getchar()
{ cout<<"Enter name :-\n";
  cin>>name;
  cout<<"Age :-\n";
  cin>>age;
  cout<<"Sex :-\n";
  cin>>sex;
  cout<<"Height :-\n";
  cin>>height;
  cout<<"Weight :-\n";
  cin>>weight;
}
void student_info::display()
{ cout<<name<<"\t"<<age<<"\t"<<sex<<"\t"<<height<<"\t"<<weight<<"\n";
}
int main()
{ student_info obj[10];
  fstream infile;
  char fname[10];
  int i,n;
  cout<<"Enter a file name to be stored. \n";
  cin>>fname;
  cout<<"How many objects are to be stored\n";
  cin>>n;
  cout<<"Enter the following information \n";
  for(i=0;i<=n-1;i++)
  { int j=i;
    cout<<"Object = "<<j+1<<"\n";
    obj[i].getchar();
  }
  infile.open(fname,ios::out);
  cout<<"Storing data onto the file...\n";
  for(i=0;i<=n-1;i++)
  { infile.write((char*)&obj[i],sizeof(obj[i]));
    cout<<"Data for Object "<<i+1<<" stored.\n";
  }
  infile.close();
  infile.open(fname,ios::in);
  cout<<"Reading from the File...\n";
  for(i=0;i<=n-1;i++)
  { infile.read((char*)&obj[i],sizeof(obj[i]));
    obj[i].display();
  }
  infile.close();
  return 0;
}
