#include<iostream>
using namespace std;
int main()
{
	int num,originaln,rem,result=0;
	cout<<"Enter a number to check  :";
	cin>>num;
	
	originaln=num;
	while(originaln!=0)
	{
		rem=originaln%10;
		result+=rem*rem*rem;
		originaln/=10;
	}
	if(result==num)
	{
		cout<<num<<"is an armstrong number.";
	}
	else
	{
		cout<<num<<"is not an armstong number.";
	}
	return 0;
}
