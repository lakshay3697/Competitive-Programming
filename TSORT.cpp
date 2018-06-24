#include<bits/stdc++.h>
using namespace std;
// Turbo Sort. TSORT...
void QSort(int [],int,int);
int Split(int [],int,int);
int main()
{ int T,A[1000001];
  cin>>T;
  for(int i=0;i<T;i++)
  { cin>>A[i];
  }
  int j=i;
  i=0;
  
  QSort(A,0,T-1);
  for(int i=0;i<T;i++)
  { cout<<A[i]<<"\n";
  }
  return 0;
}
void QSort(int A[],int LB,int UB)
{ int mid;
  if(LB<UB)
  { 
    mid=Split(A,LB,UB);
    QSort(A,LB,mid-1);
    QSort(A,mid,UB);
  }
  
}
int Split(int A[],int LB,int UB)
{ int x=A[LB];
  int p=LB+1;
  int q=UB;
  int temp=0;
  while(q>=p)
  { while((A[q]>x)&&(q>=LB))
    { q--;
	}
	while((A[p]<x)&&(p<=UB))
	{ p++;
	}
	if(q>=p)
	{ temp=A[p];
	  A[p]=A[q];
	  A[q]=temp;
	}
  }
  temp=A[q];
  A[q]=x;
  x=temp;
  return q;
}

