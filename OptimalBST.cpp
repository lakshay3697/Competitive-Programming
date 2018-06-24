#include <bits/stdc++.h>
using namespace std;
#define MAX 10
int sum(int freq[], int i, int j){
int s = 0;
for (int k = i; k <=j; k++)
s += freq[k];
return s;
} int optCost(int freq[], int i, int j){
if (j < i) return 0;
if (j == i) return freq[i];
int fsum = sum(freq, i, j), min = INT_MAX;
for (int r = i; r <= j; ++r){
int cost = optCost(freq, i, r-1) + optCost(freq, r+1, j);
if (cost < min)min = cost;
}
return min + fsum;
} int optimalSearchTree(int keys[], int freq[], int n){
return optCost(freq, 0, n-1);
} int main(){
int keys[MAX], freq[MAX], n;
cout << "Enter the number of elements:- "; cin >> n;
cout << "Enter the keys: ";
for (int i = 0; i < n; ++i)
cin >> keys[i];
cout << "Enter their freqencies respectively: ";
for (int i = 0; i < n; ++i)
cin >> freq[i];
cout << "Cost of Optimal BST is " << optimalSearchTree(keys, freq, n) << endl;
}
