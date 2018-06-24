/*  Exp. 2:  WAP to implement following algorithms using array as a data structure and analyze its time complexity.
             a. Merge Sort
             b. Quick Sort
             c. Bubble Sort
             d. Radix Sort
             e. Selection Sort
             f. Heap sort

*/
#include<bits/stdc++.h>

using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr, n);

    // Do counting sort for every digit

    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}


/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}


/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
      cout<< A[i]<<" ";
    cout<<"\n";
}


int main()
{
    int arr_size;
    cout<<"Enter the size of array"<<endl;
    cin>>arr_size;
    int *arr = new int[arr_size];
    cout <<"Enter the elements of array"<<endl;
    
    for(int i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    vector<int> arr1(arr, arr+arr_size); 


    cout<<"Given array is "<<endl;

        printArray(arr, arr_size);
     cout<<"Merge Sort: "<<endl;
     int *arr2 = &arr1[0];   
     clock_t start = clock();
    mergeSort(arr2, 0, arr_size - 1);
    clock_t end = clock();
    double total_time= (double)(end-start)*1.0/CLOCKS_PER_SEC;
    cout<<scientific<<total_time<<endl;
    cout<<"Sorted array: \n";

    printArray(arr2, arr_size);

    cout<<"Quick Sort: "<<endl;
     int *arr3 = &arr1[0];  
    clock_t start2 = clock();
    quickSort(arr3, 0, arr_size-1);
    cout<<"Sorted array: "<<endl;
    clock_t end2 = clock();
    double total_time2= (double)(end2-start2)*1.0/CLOCKS_PER_SEC;
    cout<<scientific<<total_time2<<endl;
    printArray(arr3, arr_size);

    cout<<"Bubble Sort: "<<endl;
     int *arr4 = &arr1[0];  
    clock_t start3 = clock();
    bubbleSort(arr4, arr_size);
    cout<<"Sorted array: \n";
    clock_t end3 = clock();
    double total_time3= (double)(end3-start3)*1.0/CLOCKS_PER_SEC;
    cout<<scientific<<total_time3<<endl;
    printArray(arr4, arr_size);

    cout<<"Selection Sort: "<<endl;
     int *arr5= &arr1[0];  
    clock_t start4 = clock();
    selectionSort(arr5, arr_size);
    cout<<"Sorted array: \n";
    clock_t end4 = clock();
    double total_time4= (double)(end4-start4)*1.0/CLOCKS_PER_SEC;
    cout<<scientific<<total_time4<<endl;
    printArray(arr5, arr_size);

    cout<<"Radix Sort: "<<endl;
     int *arr6 = &arr1[0];  
    clock_t start6 = clock();
    radixsort(arr6, arr_size);
    clock_t end6 = clock();
    double total_time6= (double)(end6-start6)*1.0/CLOCKS_PER_SEC;
    cout<<scientific<<total_time6<<endl;
    cout << "Sorted array : \n";
    printArray(arr6, arr_size);

    cout<<"Heap Sort: "<<endl;
     int* arr7 = &arr1[0];  
    clock_t start5 = clock();
    heapSort(arr7, arr_size);
    clock_t end5 = clock();
    double total_time5= (end5-start5)*1.0/CLOCKS_PER_SEC;
    cout<<scientific<<total_time5<<endl;
    cout << "Sorted array : \n";
    printArray(arr7, arr_size);

    return 0;
}
