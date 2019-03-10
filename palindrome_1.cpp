#include<iostream>
using namespace std;
int main()
{
	int n,remainder=0,reverse=0,original;
	cout<<"Enter number : ";
	cin>>n;
	original=n;
	while(n!=0)
	{
		remainder=n%10;
		reverse=reverse+remainder;
		n=n/10;
	}
	if(reverse==original)
	{
		cout<<"Number is Palindrome";
	}
	else
	{
		cout<<"Number is not Palindrome";
	}
	return 0;
}
