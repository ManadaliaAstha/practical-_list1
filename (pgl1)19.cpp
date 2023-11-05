#include<iostream>
using namespace std;
int main()
{
	char op;
	float no1,no2;
	
	cout<<"Enter the two numbers ::";
	cin>>no1>>no2;
	
	cout<<"Enter the arithmatic operator ::";
	cin>>op;
	
	switch(op)
	{
		case '+':
			cout<< no1 << " + "<< no2 <<" = "<<no1+no2;
			break;
		case '-':
			cout<< no1 << " - "<< no2 <<" = "<<no1-no2;
			break;
		case '*':
			cout<< no1 << " * "<< no2 <<" = "<<no1*no2;
			break;
		case '/':
			cout<< no1 << " / "<< no2 <<" = "<<no1/no2;
			break;
		default :
			cout<<"Error : Unsupported Operation..";
	}
	return 0;
}
