#include<iostream>
using namespace std;
// Matrix operation.
int main()
{ int A[10][10],B[10][10],C[10][10],r1,c1,r2,c2,ch=0,t=4;
  cout<<"Enter thr rows and columns for Matrx A  \n";
  cin>>r1>>c1;
  cout<<"Enter matrix A \n";
  for(int i=0;i<r1;i++)
  { for(int j=0;j<c1;j++)
    { cin>>A[i][j];
	}
  }
  cout<<"Enter thr rows and columns for Matrx B  \n";
  cin>>r2>>c2;
  cout<<"Enter matrix B \n";
  for(int i=0;i<r2;i++)
  { for(int j=0;j<c2;j++)
    { cin>>B[i][j];
	}
  }
  while(t--)
  {
  cout<<"Enter your choice:- \n 1. Addition \n 2. Subraction \n 3. Multiplication \n 4. Transpose \n";
  cin>>ch;
  switch(ch)
  { case 1: if((r1==r2)&&(c1==c2))
            { cout<<"Addition matrix is: \n";
              for(int i=0;i<r1;i++)
              { for(int j=0;j<c1;j++)
                { C[i][j]=A[i][j]+B[i][j];
				}
			  }
			  for(int i=0;i<r1;i++)
			  { for(int j=0;j<c1;j++)
			    { cout<<C[i][j]<<" ";
				}
				cout<<"\n";
			  }
			}
			else
			{ cout<<"Matrices can't be added. \n";
			}
			break;
	case 2: if((r1==r2)&&(c1==c2))
            { cout<<"Subtraction matrix is: \n";
              for(int i=0;i<r1;i++)
              { for(int j=0;j<c1;j++)
                { C[i][j]=A[i][j]-B[i][j];
				}
			  }
			  for(int i=0;i<r1;i++)
			  { for(int j=0;j<c1;j++)
			    { cout<<C[i][j]<<" ";
				}
				cout<<"\n";
			  }
			}
			else
			{ cout<<"Matrices can't be Subtracted. \n";
			}	
			break;	
	case 3: if(c1==r2)
	        { cout<<"Product matrix is: \n";
	          for(int i=0;i<r1;i++)
	          { for(int j=0;j<c2;j++)
	            { C[i][j]=0;
	              for(int k=0;k<c1;k++)
	              { C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
				  }
				}
			  }
			  for(int i=0;i<r1;i++)
			  { for(int j=0;j<c2;j++)
			    { cout<<C[i][j]<<" ";
				}
				cout<<"\n";
			  }
			}
			else
			{ cout<<"Matrices can't be multiplied. \n";
			}
			break;
	case 4: cout<<"Transpose of Matrix A is: \n";
	        for(int i=0;i<r1;i++)
	        { for(int j=0;j<c1;j++)
	          { C[j][i]=A[i][j];
			  }
			}
			for(int i=0;i<r1;i++)
			{ for(int j=0;j<c1;j++)
			  { cout<<C[i][j]<<" ";
			  }
			  cout<<"\n";
			}
			break;
	default:   break;
  }
  }
  return 0;
}
