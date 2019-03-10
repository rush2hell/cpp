#include<iostream>
using namespace std;
void check()
{
	int n,remainder=0,sum=0;
	cout<<"Enter number : ";
	cin>>n;
	while(n>0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	cout<<"Sum of Digits : "<<sum;
}
int main()
{
	check();
}
