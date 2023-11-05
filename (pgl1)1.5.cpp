//write a c program to input elements in array and print all negative elements//
#include<iostream>
using namespace std;
int main()
{
	int a[5],i,n;
	cout<<"This program is for finding the negativenumbers.."<<endl;
	cout<<"Enter the elements ::";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Negative elements are ::";
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i];
		}
	}
	
	return 0;
}
