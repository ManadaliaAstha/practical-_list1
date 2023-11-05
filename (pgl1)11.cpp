#include<iostream>
using namespace std;
void check (char);
int main()
{
	char c;
	
	cout<<"This program is for finding the character is 'A' vowel or consonants..."<<endl;
	
	cout<<"Enter the character ::";
	cin>>c;
	
	check(c);
	return 0;
}
void check(char ch)
{
	cout<<"Your character is ::"<<ch<<endl;
	if(ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		cout<<"This character is vowel..";
	}
	else
	{
		cout<<"This character is consonants...";
	}
	
}
