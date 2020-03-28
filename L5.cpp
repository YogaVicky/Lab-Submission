#include<bits/stdc++.h>
#include"nrootn.h"
#define ll long long int
using namespace std ;

int main()
{
	ll n;
	cout<<"Enter n :"<<endl;
    cin>>n;
    ll z=primalitycheck(n);
    if(z==0) cout<<"not prime"<<endl;
    if(z==1) cout<<"prime"<<endl;
}
