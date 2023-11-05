//write c++ program to check wheather a number is a palindrome or not using function.//
#include<iostream>
using namespace std;
int rev(int);
int main()
{
	int n;
	cout<<"Enter any number ::";
	cin>>n;
	rev(n);
}
int rev(int)
{
	int n1,d,rn=0,n;
	
	n1=n;
	while(n>0)
	{
		d=n%10;
		rn=(rn*10)+d;
		n/=10;
	}
	
	if(n1=rn)
	{
		cout<<"This number is palindrome number..";
	}
	else
	{
		cout<<"This number is not palindrome number..";
	}
	
	return 0;
}
