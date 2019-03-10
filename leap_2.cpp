#include<iostream>
using namespace std;
void check(int year)
{
	if((year%4==0) && (year%100!=0))
	{
		cout<<year<<" is Leap Year ";
	}
	else
	{
		cout<<year<<" not Leap Year ";
	}
}
int main()
{
	check(1987);
}
