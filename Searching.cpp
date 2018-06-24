#include<iostream>
#include<algorithm>
#include<ctime>
#include<iomanip>
using namespace std;
void linearSearch (int*a,int item,int n)
{
    for (int i=0; i<=n; i++)
    {
        if(a[i]==item)
           {
            cout<<"Item found at : "<<i<<"th index"<<endl;
            return;
           }
    }
    cout<<"Item not found"<<endl;
}
void binarySearch (int*a,int item ,int n)
{
   int l= 0;
   int r=n-1;
  while (l <= r)
  {
    int m = l + (r-l)/2;

    // Check if item is present at mid
    if (a[m] == item)
      {
            cout<<"Item found at :"<<m<<"th position"<<endl;
            return;
      }
    // If item is greater, ignore left half
    if (a[m] < item)
        l = m + 1;

    // If item is smaller, ignore right half
    else
         r = m - 1;
  }

  // if we reach here, then element was not present
  cout<<"Item not found";
}




int main()
{
    int n,item;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *a= new int[n];
    cout <<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);

    cout << "\nArray after sorting using "
         "default sort is : \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout<<endl;
    cout<<"Enter the element to be searched: "<<endl;
    cin>>item;
    clock_t start = clock();
    linearSearch(a,item,n);
    clock_t end = clock();
    double total_time= (double)(end-start)*1.0/CLOCKS_PER_SEC;
    cout<<fixed<<setprecision(10)<<total_time<<endl;
    clock_t start2 = clock();
    binarySearch(a,item,n);
    clock_t end2= clock();
    double total_time2= (double)(end2-start2)*1.0/CLOCKS_PER_SEC;
    cout<<fixed<<setprecision(10)<<total_time2<<endl;
    return 0;
}
