#include<bits/stdc++.h>
#include"nrootn.h"
#include"2n-3.h"
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

    int number;
	cout<<"enter the size"<<endl;
	cin>>number;
	int arr[number];
	cout<<"enter"<<number<<"elements"<<endl;
	for (int i = 0; i < number; ++i)
	{
		cin>>arr[i];
	}
	struct test t=comp(arr,number);
	cout<<"max="<<t.max<<endl;
	cout<<"min="<<t.min<<endl;

}
