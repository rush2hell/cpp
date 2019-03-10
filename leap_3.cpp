#include<iostream>
using namespace std;
int check(int year)
{
	if((year%4==0) && (year%100!=0))
	{
		return 1;
	}
	else
	{
		return 0;;
	}
}
int main()
{
	check(1987);
}
