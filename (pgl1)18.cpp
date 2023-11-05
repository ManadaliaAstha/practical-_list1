#include<iostream>
using namespace std;
int power(int a,int n)
{
	int val=1;
	for(int i=n;i>0;i--)
	{
		val=val*a;
	}
	return val;
}
int main()
{
	int x,y;
	
	cout<<"Enter the number ::";
	cin>>x;
	
	cout<<"Enter the power ::";
	cin>>y;
	
	cout<<power(x,y);
	
	return 0;
}
