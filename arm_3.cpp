#include<iostream>
using namespace std;
int check(int n)
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
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	check(153);
}
