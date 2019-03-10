#include<iostream>
using namespace std;
int main()
{
	int n,remainder=0,ans=0,original;
	cout<<"Enter number : ";
	cin>>n;
	n=original;
	while(n!=0)
	{
		remainder=n%10;
		ans=ans+remainder*remainder*remainder;
		n=n/10;
	}
	if(original==n)
	{
		cout<<"Number is Armstrong ";
	}
	else
	{
		cout<<"Number is not Armstrong ";
	}
	return 0;
}
