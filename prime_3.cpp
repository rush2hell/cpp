#include<iostream>
using namespace std;
int check(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return false;
			break;
		}
	}
	if(i>n/2)
	{
		return true;
	}
}
int main()
{
	check(3);
}
