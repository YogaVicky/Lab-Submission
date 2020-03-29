#include<bits/stdc++.h>
#include"makefiles5\Merge.h"
#include"makefiles5\BST.h"
#include"makefiles5\PointerMin.h"
#include"makefiles5\MinHeap.h"
using namespace std;



int main()
{

	cout<<"Enter the number of arrays"<<endl;
	cin>>n;
	
	cout<<"Enter the size of the arrays"<<endl;
	cin>>size;
	cout<<"Enter the members of the array"<<endl;
	int arr[n][size];
	cout<<"Enter the array"<<endl;
	int k;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the array "<<i<<endl;
		for(j=0;j<size;j++)
		{
			cin>>arr[i][j];
		}
	}
	/*Declaration and initialization of array of pointers*/
	int* a[n];
	int* b[n];
	for(i=0;i<n;i++)
	{
		a[i]=&arr[i][0];
		b[i]=&arr[i][size-1];
	}
	
	cout<<endl<<"Through incremental method";
	UnionMerge(&arr[0][0],size,n);
	
	cout<<endl<<"Through BST method"<<endl;
	Union(&arr[0][0],n,size);
	
	
	cout<<endl<<"Through Pointer method"<<endl;

	for(i=0;i<n*size;i++)
	{
		cout<<Union(a,n,b)<<" ";
	}
	
	cout<<endl<<"Through Min-Heap method"<<endl;
	/*Reinitialization of array of pointers to reset the pointers back to initial element of the arrays*/
	for(i=0;i<n;i++)
	{
		a[i]=&arr[i][0];
		b[i]=&arr[i][size-1];
	}
	Union(a,n,size,b);
	
	
	cout<<endl<<"Through Divide and Conquer"<<endl;
	
	return 0;
}
