#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll x=1000000;
 
// utility function for printing
// the found path in graph
void printpath(vector<ll>& path)
{
    ll size = path.size();
    if(size<x)
    {
    	x=size;
	}
   /* for (int i = 0; i < size; i++) 
        cout << path[i]+1<< " ";    
    cout << endl; */
}
 
// utility function to check if current
// vertex is already present in path
int isNotVisited(ll x, vector<ll>& path)
{
    ll size = path.size();
    for (ll i = 0; i < size; i++) 
        if (path[i] == x) 
            return 0; 
    return 1;
}
 
// utility function for finding paths in graph
// from source to destination
void findpaths(vector<vector<ll> >&g, ll src, 
                                 ll dst, ll v)
{
    // create a queue which stores
    // the paths
    queue<vector<ll> > q;
 
    // path vector to store the current path
    vector<ll> path;
    path.push_back(src);
    q.push(path);
    while (!q.empty()) {
        path = q.front();
        q.pop();
        ll last = path[path.size() - 1];
 
        // if last vertex is the desired destination
        // then print the path
        if (last == dst) 
            printpath(path);        
 
        // traverse to all the nodes connected to 
        // current vertex and push new path to queue
        for (ll i = 0; i < g[last].size(); i++) {
            if (isNotVisited(g[last][i], path)) {
                vector<ll> newpath(path);
                newpath.push_back(g[last][i]);
                q.push(newpath);
            }
        }
    }
}
 
// driver program
int main()
{
	ll  T;
	cin>>T;
	while(T--)
	{
		ll N,M,S,E;
		cin>>N>>M>>S>>E;
		vector<vector<ll> > g;
		for(ll i=0;i<M;i++)
		{
			ll A,B;
			cin>>A>>B;
			g[A-1].push_back(B-1);
			g[B-1].push_back(A-1);
		}
    // function for finding the paths
    findpaths(g,S-1,E-1,N);
    
    }
 
    return 0;
}

