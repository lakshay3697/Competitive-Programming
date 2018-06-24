#include<bits/stdc++.h>
using namespace std;
int main()
{ char ch;
  ifstream infile;
  infile.open("Sky.txt");
  if(infile.fail())
  { cout<<"No such file exists. \n";
    exit(1);
  }
  while(!infile.eof())
  { infile.get(ch);
    cout<<ch;
  }
  infile.close();
  return 0;
}
