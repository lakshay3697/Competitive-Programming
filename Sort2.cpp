#include <iostream>
using namespace std;
void insertionSort(int a[], int n)
{
int i, key, j;
for (i = 1; i < n; i++)
   {
key = a[i];
       j = i-1;
while (j >= 0 && a[j] > key)
       {
a[j+1] = a[j];
           j = j-1;
       }
a[j+1] = key;
   }
}
void merge(int a[], int l, int m, int r)
{
int i, j, k;
int n1 = m - l + 1;
int n2 =  r - m;
int L[n1], R[n2];
for (i = 0; i < n1; i++)
        L[i] = a[l + i];
for (j = 0; j < n2; j++)
        R[j] = a[m + 1+ j];
    i = 0; 
	j = 0;
    k = l;
while (i < n1 && j < n2)
    {
if (L[i] <= R[j])
        {
a[k] = L[i];
i++;
        }
else
        {
a[k] = R[j];
j++;
        }
k++;
    }
while (i < n1)
    {
a[k] = L[i];
i++;
k++;
    }
	while (j < n2)
    {
a[k] = R[j];
j++;
k++;
    }
}
void mergeSort(int a[], int l, int r)
{
if (l < r)
    {
int m = l+(r-l)/2;
	mergeSort(a, l, m);
mergeSort(a, m+1, r);

merge(a, l, m, r);
    }
}
void swap(int* a, int* b)
{
int t = *a;
    *a = *b;
    *b = t;
}
int partition (int a[], int low, int high)
{
int pivot = a[high];
int i = (low - 1);   
for (int j = low; j <= high- 1; j++)
    {
if (a[j] <= pivot)
        {
i++;  
swap(&a[i], &a[j]);
        }
    }
swap(&a[i + 1], &a[high]);
return (i + 1);
}
void quickSort(int a[], int low, int high)
{
if (low < high)
    {
int pi = partition(a, low, high);
		quickSort(a, low, pi - 1);
quickSort(a, pi + 1, high);
    }
}
void heapify(int a[], int n, int i)
{
int largest = i;
int l = 2*i + 1;
int r = 2*i + 2;
if (l < n && a[l] > a[largest])
largest = l;
if (r < n && a[r] > a[largest])
largest = r;
if (largest != i)
    {
swap(a[i], a[largest]);
heapify(a, n, largest);
    }
}
void heapSort(int a[], int n)
{
for (int i = n / 2 - 1; i >= 0; i--)
heapify(a, n, i);
for (int i=n-1; i>=0; i--)
    {
swap(a[0], a[i]);
heapify(a, i, 0);
    }
}

void printarray(int a[], int n)
{
int i;
for (i=0; i < n; i++)
cout<<a[i]<<" ";
cout<<endl;
}
int main()
{    int a[5],n=5;
	int temp[5];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
	{	cin>>a[i];
		temp[i]=a[i];
	}
	cout<<"\n";
	cout<<"Insertion sort"<<endl;
cout<<"Given array is "<<endl;
printarray(temp, n);
	insertionSort(a, n);
cout<<"Sorted array is "<<endl;
	printarray(a, n);
	cout<<"\n";
	cout<<"Merge sort"<<endl;
cout<<"Given array is "<<endl;
printarray(temp, n);
mergeSort(a, 0,n-1);
cout<<"Sorted array is "<<endl;
	printarray(a, n);
	cout<<"\n";
	cout<<"Quick sort"<<endl;
cout<<"Given array is "<<endl;
printarray(temp, n);
	quickSort(a, 0,n-1);
cout<<"Sorted array is "<<endl;
	printarray(a,n);
	cout<<"\n";
	cout<<"Heap sort"<<endl;
	cout<<"Given array is "<<endl;
printarray(temp, n);
	heapSort(a, n);
cout<< "Sorted array is \n";
printarray(a, n);
return 0; }

