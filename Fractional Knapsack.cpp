#include<bits/stdc++.h>
using namespace std;
#define MAX 4
int p[MAX], w[MAX], c;
double x[MAX];
void swap(int i, int j){
int t;
t = p[i]; p[i] = p[j]; p[j] = t;
t = w[i]; w[i] = w[j]; w[j] = t;
}
void init(){
vector<pair<double, int> > val;
for(int i = 0; i < MAX; i++)
val.push_back({(p[i]*1.0)/w[i], i});
sort(val.rbegin(), val.rend());
for(int i = 0; i < MAX/2; i++)
swap(i, val[i].second);
}
double GKSack(){
for(int i = 0; i < MAX; i++) x[i] = 0;
double pr = 0; int wt = 0;
for(int i = 0; wt < c; i++){
if(wt + w[i] <= c){
x[i] = 1;
wt += w[i];
} else{
x[i] = (c - wt)/(w[i] * 1.0);
wt = c;
}pr += p[i]*x[i];
}return pr;
} int main(){
cout << "Enter the profit of each item :- ";
for(int i = 0; i < MAX; i++) cin >> p[i];
cout << "Enter the weight of each item :- ";
for(int i = 0; i < MAX; i++) cin >> w[i];
cout << "Enter the capacity of the sack :- "; cin >> c;
cout << "The maximum possible profit is :- "; init();
cout << GKSack() << endl;
cout << "The faction of respective items to be selected is\n";
for(int i = 0; i < MAX; i++)
cout << x[i] << " ";
}
