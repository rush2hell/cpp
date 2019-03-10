#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter Year to Check : ";
	cin>>year;
	if((year%4==0) && (year%100!=0))
	{
		cout<<year<<" is Leap Year ";
	}
	else
	{
		cout<<year<<" not Leap Year ";
	}
	return 0;
}
