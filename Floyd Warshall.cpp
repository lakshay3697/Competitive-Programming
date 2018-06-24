#include <bits/stdc++.h>
using namespace std;
#define V 5
#define INF 99999
void printSolution(int dist[][V]){
printf ("Following matrix shows the shortest distances between every pair of vertices \n");
for (int i = 0; i < V; i++){
for (int j = 0; j < V; j++)
if (dist[i][j] == INF) printf("%7s", "INF");
else printf ("%7d", dist[i][j]);
printf("\n");
}
}
void floydWarshall (int graph[][V]){
int dist[V][V], i, j, k;
for (i = 0; i < V; i++)
for (j = 0; j < V; j++)
dist[i][j] = graph[i][j];
for (k = 0; k < V; k++)
for (i = 0; i < V; i++)
for (j = 0; j < V; j++)
if (dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j];
printSolution(dist);
} int main(){
int graph[V][V] = {{INF, INF, INF, INF, INF}, {INF, INF, INF, INF, INF}, {INF, INF, INF, INF,
INF}, {INF, INF, INF, INF, INF}, {INF, INF, INF, INF, INF},}, n, a, b, w;
for (int i = 0; i < V; ++i) graph[i][i] = 0;
cout << "Enter the number of edges: "; cin >> n;
cout << "Enter " << n << " lines representing first node, second node and the connecting edge weight respectively:\n";
for (int i = 0; i < n; ++i){
cin >> a >> b >> w; graph[a][b] = w;
}
floydWarshall(graph);
}
