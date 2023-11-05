//write c++ program to find simple interest//
#include<iostream>
using namespace std;
int main()
{
	int p,r,t;
	
	cout<<"Enter the principle amount ::";
	cin>>p;
	
	cout<<"Enter the time period      ::";
	cin>>t;
	
	cout<<"Enter the rate of interest  ::";
	cin>>r;
	
	cout<<"Simple interest is ::"<<p*t*r/100;
	
	return 0;
	
	
	
}
