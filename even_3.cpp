#include<iostream>
using namespace std;
int check(int n)
{
	if(n%2==0)
	{
		cout<<"Even";
		return 1;
	}
	else
	{
		cout<<"Odd";
		return 0;
	}
}
int main()
{
	check(8);
}
