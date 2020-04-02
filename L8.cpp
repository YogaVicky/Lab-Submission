#include<bits/stdc++.h>
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
