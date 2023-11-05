//write c++ program to print multiplication table of a number.//
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout<<"This program for print multiplication table.."<<endl;
	cout<<"Enter the poitive number ::";
	cin>>n;
	
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	
	return 0;
}
