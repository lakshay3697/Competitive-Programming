#include <bits/stdc++.h>
using namespace std;
#define V 9
int minDistance(int dist[], bool sptSet[]){
int min = INT_MAX, min_index;
for (int v = 0; v < V; v++)
if (sptSet[v] == false && dist[v] <= min)
min = dist[v], min_index = v;
return min_index;
} int printSolution(int dist[], int n){
printf("Vertex and the distance from source respectively\n");
for (int i = 0; i < V; i++)
cout << i << " " << dist[i] << endl;
}
void dijkstra(int graph[V][V], int src){
int dist[V];
bool sptSet[V];
for (int i = 0; i < V; i++)
dist[i] = INT_MAX, sptSet[i] = false;
dist[src] = 0;
for (int count = 0; count < V-1; count++){
int u = minDistance(dist, sptSet);
sptSet[u] = true;
for (int v = 0; v < V; v++)
if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX &&
dist[u]+graph[u][v] < dist[v])
dist[v] = dist[u] + graph[u][v];
}
printSolution(dist, V);
} int main(){
int graph[V][V] = {0}, n;
cout << "Enter the number of edges: "; cin >> n;
cout << "Enter " << n << " lines representing edges with two nodes and the weight respectively:\n";
for (int i = 0; i < n; ++i){
int a, b, w;
cin >> a >> b >> w;
graph[a][b] = graph[b][a] = w;
}
dijkstra(graph, 0);
}
