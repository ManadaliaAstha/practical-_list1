//write c++ program to swap numbers.//
#include<iostream>
using namespace std;
int main()
{
	int no1,no2,temp;
	cout<<"This program is swap two numbers..."<<endl;
	cout<<"Enter the two numbers ::";
	cin>>no1>>no2;
	
	temp=no1;
	no1=no2;
	no2=temp;
	
	cout<<"After the swapping.."<<endl<<no1<<endl<<no2;
	
	return 0;
}
