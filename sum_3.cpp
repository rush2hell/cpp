#include<iostream>
using namespace std;
int check(int n)
{
	int remainder=0,sum=0;
	while(n>0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	return sum;
}
int main()
{
	check(123);
}
