#include <iostream>
using namespace std;
// INSERTION SORT
void insertionSort(int arr[], int n){
for (int i = 1; i < n; i++){
int key = arr[i];
int j = i-1;
while (j >= 0 && arr[j] > key)
arr[j+1] = arr[j--];
arr[j+1] = key;
}
}
// BUBBLE SORT
void swap(int *xp, int *yp){
int temp = *xp;
*xp = *yp;
*yp = temp;
}
void bubbleSort(int arr[], int n){
for (int i = 0; i < n-1; i++)
for (int j = 0; j < n-i-1; j++)
if (arr[j] > arr[j+1])
swap(&arr[j], &arr[j+1]);
}
//QUICK SORT
int partition (int arr[], int low, int high){
int pivot = arr[high], i = (low - 1);
for (int j = low; j <= high- 1; j++)
if (arr[j] <= pivot)
swap(&arr[++i], &arr[j]);
swap(&arr[i + 1], &arr[high]);
return (i + 1);
}
void quickSort(int arr[], int low, int high){
if (low < high){
int pi = partition(arr, low, high);
quickSort(arr, low, pi - 1);
quickSort(arr, pi + 1, high);
}
}
// MERGE SORT
void merge(int arr[], int l, int m, int r){
int i, j, k, n1 = m - l + 1, n2 = r - m, L[n1], R[n2];
for (i = 0; i < n1; i++)L[i] = arr[l + i];
for (j = 0; j < n2; j++) R[j] = arr[m + 1+ j];
i = 0; j = 0; k = l;
while (i < n1 && j < n2)
(L[i] <= R[j])? arr[k++] = L[i++] : arr[k++] = R[j++];
while (i < n1) arr[k++] = L[i++];
while (j < n2) arr[k++] = R[j++];
}
void mergeSort(int arr[], int l, int r){
if (l < r){
int m = l+(r-l)/2;
mergeSort(arr, l, m);
mergeSort(arr, m+1, r);
merge(arr, l, m, r);
}
}
// UTILITY FUNCTION
void printArray(int arr[], int n){
for (int i=0; i < n; i++)
printf("%d ", arr[i]);
printf("\n");
}
// DRIVER PROGRAM
int main(){
int n = 5, a1[5], a2[5], a3[5], a4[5];
cout << "Enter an unsorted array: ";
for (int i = 0; i < n; ++i){
cin >> a1[i];
a2[i] = a3[i] = a4[i] = a1[i];
}
insertionSort(a1, n);
cout << "Insertion Sort: "; printArray(a1, n);
bubbleSort(a2, n);
cout << "Bubble Sort : "; printArray(a2, n);
quickSort(a3, 0, n-1);
cout << "Quick Sort : "; printArray(a3, n);
mergeSort(a4, 0, n - 1);
cout << "Merge Sort : "; printArray(a4, n);
}
