#include<iostream>
using namespace std;
int sum(int n)
{
	int add=0,i;
	
	for(i=1;i<=n;i++)
	{
		add+=i;
	}
	return add;
}
int main()
{
	int range,result;
	
	cout<<"Enter the number which you want to print ::";
	cin>>range;
	
	result=sum(range);
	
	cout<<"Sum is ::"<<result;
	
}
