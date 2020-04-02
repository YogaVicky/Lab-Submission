#include<bits/stdc++.h>
#include"makefiles8/module3/dfs.h"
#include"makefiles8/module4/Test_bridges.h"
#include"makefiles8/module4/Test_bipartite.h"
#include"makefiles8/module4/Test_articulationpoints.h"
#include"makefiles8/module5/MST_Prim.h"
#include"makefiles8/module5/MST_Kruskal.h"
#include"makefiles8/module5/MST_MyAlgo.h"
#define ll long long int
#define vl vector<int>
#define vvl vector<vl>
#define vb vector<bool>
using namespace std;

int main()
{
    int n; 
    vvl G; 
    vl visited;
    vl tin, low;
    int timer;
    int nodes,edges;
	cout<<"Enter the number of vertices in the graph"<<endl;
	cin>>nodes;
	cout<<endl<<"Enter the number of edges in the graph"<<endl;
	cin>>edges;
	vl visit,v;
	visit.assign(nodes,false);
	v.assign(nodes,false);
	G.assign(nodes,vector<int>());
	int p1,p2;
	cout<<"Enter the graph"<<endl;
	int i;
	for(i=0;i<edges;i++)
	{
		cout<<"Enter the first end";
		cin>>p1;
		cout<<endl<<"Enter the second end";
		cin>>p2;
		
		if(p1>=nodes || p2>=nodes)
		{
			cout<<"Invalid graph"<<endl;
			break;
		}
		addEdge(p1,p2);
	}
	
	length.assign(nodes,0);



    /*MODULE 1*/


    /*MODULE 2*/


    /*MODULE 3*/


    /*MODULE 4*/

    /*Test_bipartite*/
    Test_bipartite(G);

    /*Test_articulationpoints*/
    Test_articulationpoints(G);

    /*Test_bridges*/
    Test_bridges(G);

    /*MODULE 5*/
    
    /*MST_Prim*/
    MST_Prim(G);

    /*MST_Kruskal*/
    MST_Kruskal(G);

    /*MST_MyAlgo*/
    MST_MyAlgo(G);
    return 0;
}
