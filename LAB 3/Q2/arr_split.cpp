#include<iostream>
#include"split.h"
using namespace ::std;

int main()
{
   int s;
   cout<<"pls enter arreay size\n";
   cin>>s;
   
   cout<<"pls enter array elements\n";
   int a[s],p[s/2],q[s/2];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
 
    split_almost(a,p,q,s);

    cout<<"arr1\tarr2\n";
    for(int i=0;i<s/2;i++)
	cout<<p[i]<<'\t'<<q[i]<<'\n';
	cout<<'\n';
}
