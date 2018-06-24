#include<bits/stdc++.h>
using namespace std;
/* Bear and Clique Distances. CLIQUED.... */
/* Reference to Dijkstra Algorithm is taken from  http://www.geeksforgeeks.org/greedy-algorithms-set-6-dijkstras-shortest-path-algorithm/  
   .........................................  Learned a New Algorithm !!!!!!!!!!!!!  .......................................
   Thanks Codechef !!!!!!  */
   //  BE PHENOMENAL OR BE FORGOTTEN !!!!!!     
#define ll long long
ll p_MinDist(ll [],bool [],ll ); 
int main()
{ ll T,N,K,X,M,S,a,b,c;
  cin>>T;
  while(T--)
  { cin>>N>>K>>X>>M>>S;
    ll cmat[N][N];  // CREATING COST MATRIX............
    for(ll i=1;i<=N;i++)
    { for(ll j=1;j<=N;j++)
      { cmat[i][j]=0;
	  }
	}
    for(ll i=1;i<K;i++)
    { for(ll j=i+1;j<=K;j++)
      { cmat[i][j]=X;
        cmat[j][i]=X;
	  }
	}
    for(ll i=0;i<M;i++)
    { cin>>a>>b>>c;
      cmat[a][b]=c;
      cmat[b][a]=c;
	}
  //   DIJKSTRA ALGORITHM IMPLEMENTATION.....................
  
  ll MinDist[N];
  bool sptSet[N];
  // INITIALIZING THE MinDIST[] ARRAY TO LARGE VALUES FOR EACH NODE/CITY AND sptSET TO FALSE...........
  for(ll i=1;i<=N;i++)
  { MinDist[i]=LLONG_MAX;
    sptSet[i]=false;
  }
  MinDist[S]=0;
  for(ll i=1;i<N;i++) 
  { ll x=p_MinDist(MinDist,sptSet,N);
    sptSet[x]=true; 
    // UPDATING THE DISTANCES OF CITIES/NODES ADJACENT TO CHOSEN NODE/CITY .............
    for(ll j=1;j<=N;j++)
    { if(!sptSet[j]&&cmat[x][j]&&(MinDist[x]+cmat[x][j]<MinDist[j]))
      {  MinDist[j]=cmat[x][j]+MinDist[x];
	  }
	}
  }
  // PRINTING THE MinDist[] ARRAY .............
  for(ll i=1;i<=N;i++)
  { cout<<MinDist[i]<<" ";
  }
  cout<<"\n";
  }
  return 0;
}
// PICKING THE NODE/CITY FROM NODES/CITIES NOT INCLUDED IN sptSet............
ll p_MinDist(ll MinDist[],bool sptSet[],ll N)
{ ll min=LLONG_MAX,min_index=0;
  for(ll i=1;i<=N;i++)
  { if(sptSet[i]==false&&MinDist[i]<=min)
    { min=MinDist[i];
      min_index=i;
	}
  }
  return min_index;
}
