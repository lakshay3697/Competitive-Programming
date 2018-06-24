#include <iostream>
using namespace std;
#define MAX 10
#define max(a, b) ((a > b)? a : b)
int main(){
int n , w, wt[MAX], pt[MAX], ans[MAX][MAX];
wt[0] = 0; pt[0] = 0;
cout << "Enter the number of items (max = 10) :- "; cin >> n;
cout << "Enter the capacity of sack (max = 10) :- "; cin >> w;
cout << "Enter the weight of each item :- ";
for(int i = 1; i <= n; i++)
cin >> wt[i];
cout << "Enter the profit of each item :- ";
for(int i = 1; i <= n; i++)
cin >> pt[i];
for(int k = 0; k <= n; k++){
for(int u = 0; u <= w; u++){
if(k == 0 || u == 0)
ans[k][u] = 0;
else if(wt[k] > u)
ans[k][u] = ans[k-1][u];
else
ans[k][u] = max(ans[k-1][u], ans[k-1][u-wt[k]] + pt[k]);
}
}
cout << "Maximum profit: " << ans[n][w] << endl;
int i = n, k = w;
cout << "Selected items:-\n";
while(i > 0 && k > 0){
if(ans[i][k] != ans[i - 1][k]){
cout << i << " ";
k -= wt[i];
} i--;
} cout << endl;
}
