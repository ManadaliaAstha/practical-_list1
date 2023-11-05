#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int no1,no2,no3;
	cout<<"This program is for finding the largest among three number.."<<endl;
	
	cout<<"Enter the three numbers ::";
	cin>>no1>>no2>>no3;
	
	if(no1>=no2&&no1>=no3)
	{
		cout<<"Largest number ::"<<no1;
	}
	else if(no2>=no1&&no2>=no3)

	{
		cout<<"Largest number ::"<<no2;
	}
	else
	{
		cout<<"Largest number ::"<<no3;
	}
	
	return 0;
	
}
