#include<bits/stdc++.h>


using namespace std;

vector<int> dist;
vector<int> path;

int longestpath(Graph G, int u)
{
	if(visit[u])
		return dist[u];
	visit[u]=true;
	dist[u]=1;
	for(auto v=G[u].begin();v!=G[u].end();v++)
	{
		int c=*v;
		if(dist[u]<longestpath(G,c)+1)
		{
			dist[u]=dist[c]+1;
			path[u+1]=c+1;
		}
	}
	return dist[u];
}
