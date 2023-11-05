
//write c++ program to check even or odd integers.//
#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"This program for check to number is odd or even.."<<endl;

	cout<<"Enter the number ::";
	cin>>n;
	
	if(n%2==0)
	{
		cout<<n<<" is even..";
	}
	else
	{
		cout<<n<<" is odd..";
	}
	
	
	return 0;
}
