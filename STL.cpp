#include<iostream>
#include<vector>
using namespace std;

int  main()
{
	vector<int> v;
	int i,j;
	cout<<"Enter the number of elements to push"<<endl;
	cin>>i;
	for(j=1;j<=i;j++)
	{
		v.push_back(j);
	}
	
	cout<<"Array after adding elements    = ";
	
	for(j=0;j<i;j++)
	{
		cout<<"\t"<<v[j];
	}
	
	int d;
	cout<<"\nEnter the number of elements to delete in present array :"<<endl;
	cin>>d;
	if(d>j)
	{
		cout<<d<<"\nelements are not present in array please try again"<<endl;
	}
	else
	{
		for(j=0;j<d;j++)
		{
			v.pop_back();
		}
		
		cout<<"Array after deleting elements  = ";
		for(j=0;j<i-j;j++)
		{
			cout<<"\t"<<v[j];
		}
	}
}









