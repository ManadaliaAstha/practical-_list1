//write a c program to enter length and breath of a rectangle and find its perimeter and area.
#include<iostream>
using namespace std;
int main()
{
	float l,b,area,perimeter;
	
	cout<<"Enter the length and breadth of a rectangle for find its perimeter and area..";
	cin>>l>>b;
	
	cout<<"Area is ::"<<l*b<<endl;
	cout<<"Perimeter is ::"<<2*(l+b)<<endl;
	
	return 0;
	
}
