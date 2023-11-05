//write c++ program to find compound interest//
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,t,r,ci;
	
	cout<<"Enter the principle of amount ::";
	cin>>p;
	
	cout<<"Enter the time of period      ::";
	cin>>t;
	
	cout<<"Enter the rate of interest    ::";
	cin>>r;
	
	cout<<"Compound interest is ::"<<p*pow((1+r/100),t)-p;
	
	return 0;
}
