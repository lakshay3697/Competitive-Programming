#include <iostream>
using namespace std;
#define MAX 10
int ar[MAX], btime = 0, ltime = 0;
int bs(int n);
int ls(int n);
int main() {
int n;
cout << "Enter a sorted array (max size 10)\n";
for(int i = 0; i < MAX; i++)
cin >> ar[i];
cout << "Enter the element to be searched : ";
cin >> n;
cout << "Linear search result: " <<"Element found at index "<< ls(n) << endl;
cout << "Binary search result: " <<"Element found at index "<< bs(n) << endl;
cout << "Time Comparision\n";
cout << "Time taken by linear search = " << ltime << endl;
cout << "Time taken by binary search = " << btime << endl;
} int bs(int n){
int l = 0, h = MAX, m;
while(l <= h){
m = (l+h)/2; btime += 2;
if(n == ar[m]) return m;
else if(n < ar[m]) h = m - 1;
else l = m + 1;
btime += 2;
}
return -1;
} int ls(int n){
for(int i = 0; i < MAX; i++) {
ltime += 1;
if(ar[i] == n) return i;
}
return -1;
}

