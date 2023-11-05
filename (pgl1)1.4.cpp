//write a c program to enter radius of a circle and find its diameter,circumference and area.
#include<iostream>
using namespace std;
int main()
{
	float r,dia,cir,area;
	
	cout<<"This program is for finding the circle of diameter,circumference and area.."<<endl;
	
	cout<<"Enter the radius ::";
	cin>>r;
	
	cout<<"Diameter of the circle is ::"<<2*r<<endl;
	cout<<"Circumference of the circle is ::"<<2*3.14*r<<endl;
	cout<<"Area of the circle is ::"<<3.14*r*r<<endl;
	
	return 0;
}
