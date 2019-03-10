//store array and calculate result of 5 numbers entered by user
#include<iostream>
using namespace std;
int main()
{
	int a[5],sum=0;
	cout<<"Enter the elements for array :";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		sum=a[i]+sum;
	}
	cout<<"Sum of numbers : "<<sum;
	return 0;
}
