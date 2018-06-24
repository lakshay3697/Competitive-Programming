#include<iostream>
using namespace std;
string x, y;
int m, n, c[10][10];
char b[10][10];
void LCS(){
m = x.length(); n = y.length();
c[0][0] = 0;
for(int i = 1; i <= m; i++)
c[i][0] = 0;
for(int i = 1; i <= n; i++)
c[0][i] = 0;
for(int i = 1; i <= m; i++)
for(int j = 1; j <= n; j++)
if(x[i - 1] == y[j - 1]){
c[i][j] = c[i-1][j-1] + 1;
b[i][j] = 'd';
}else if(c[i-1][j] >= c[i][j-1]){
c[i][j] = c[i-1][j];
b[i][j] = 'u';
}else {
c[i][j] = c[i][j-1];
b[i][j] = 'l';
}
}
void PLCS(int i, int j){
if(i == 0 || j == 0) return;
if(b[i][j] == 'd'){
PLCS(i-1, j-1);
cout << x[i - 1];
}else if(b[i][j] == 'u') PLCS(i-1, j);
else PLCS(i, j-1);
} int main(){
cout << "Enter first string :- "; cin >> x;
cout << "Enter second string :- "; cin >> y;
LCS();
cout << "The longest common subsequence is :- ";
PLCS(m, n);
cout << endl;
}
