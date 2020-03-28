#include<bits/stdc++.h>
#include"makefiles8/dfs.h"
#include"makefiles8/module4/Test_bridges.h"
#include"makefiles8/module4/Test_bipartite.h"
#include"makefiles8/module4/Test_articulationpoints.h"
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

    /*Test_bipartite*/
    Test_bipartite(G);

    /*Test_articulationpoints*/
    Test_articulationpoints(G);

    /*Test_bridges*/
    Test_bridges(G);
    return 0;
}
