#include<iostream>
using namespace std;
void check(int n)
{
	int remainder=0,ans=0,original;
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
}
int main()
{
	check(153);
}
