#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return fact(n-1)*n;
	}
}
int main()
{
	int f;
	f=fact(5);
	cout<<f;
}
