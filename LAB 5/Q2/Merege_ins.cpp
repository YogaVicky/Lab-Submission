#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"makefile/merge.h"

using namespace std;


int main()
{
    int a[1000000];
	srand(time(NULL));
	for(int i=0;i<1000000;i++)
		a[i]=rand();
	divsort(0,1000000,a);

	for(int i=0;i<999999;i++)
	{
		if(a[i]>a[i+1])
			{
				cout<<"fail"<<i<<" ";
				return(0);
			}			
	}
	cout<<"sucess";
}