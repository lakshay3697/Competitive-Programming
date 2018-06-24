#include <iostream>
using namespace std;

int main() {
	long long int t,i,c,n,q,l,r,p,d,a;
	cin>>t;
	while(t--){
		cin>>n>>q;
		long long int A[q+1][3],B[100001]={0},C[100001]={0};
		for(i=1;i<=q;i++){
			cin>>A[i][0]>>A[i][1]>>A[i][2];
		}
		c=1;
		for(i=q;i>0;i--){
			c+=B[i];
			cout<<c<<"\n";
			B[i]=c;
			if(A[i][0]==2){
				B[A[i][1]-1]+=-c;
				B[A[i][2]]+=c;
			}
			else{
				C[A[i][1]]+=B[i];
				C[A[i][2]+1]+=-B[i];
			}
			for( a=1;a<=q;a++)
			{
				cout<<B[a]<<" ";
			}
			cout<<"\n";
			cout<<"\n";
		}
		for(i=1;i<=q;i++){
			cout<<B[i]<<" ";
		}
		cout<<endl<<endl;
		d=0;
		for(i=1;i<=n;i++){
			d+=C[i];
			C[i]=d;
			cout<<C[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
