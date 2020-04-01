#include<bits/stdc++.h>
#include"dfs.h"
#include"longpath.h"

using namespace std;

void addEdge(vertex a,vertex b)
{
	G[a].push_back(b);
	
	G[b].push_back(a);
}

int main()
{
	
	int nodes,edges;
	cout<<"Enter the number of vertices in the graph"<<endl;
	cin>>nodes;
	cout<<endl<<"Enter the number of edges in the graph"<<endl;
	cin>>edges;
	
	visit.assign(nodes,false);
	G.assign(nodes,vector<int>());
	
	int p1,p2;
	cout<<"Enter the graph"<<endl;
	
	int i;
	for(i=0;i<edges;i++)
	{
		cout<<"Enter the first edge";
		cin>>p1;
		cout<<endl<<"Enter the second edge";
		cin>>p2;
		
		if(p1>=nodes || p2>=nodes)
		{
			cout<<"Invalid graph"<<endl;
			break;
		}
		addEdge(p1,p2);
	}
	
	
	cout<<"Longest path is "<<endl;
	
	longestpath(G,0);
	
	
	return 0;
	
}
