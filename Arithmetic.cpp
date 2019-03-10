#include<iostream>
using namespace std;
int main()
{
	int a,b,add,sub,mul,div,mdiv;
	cout<<"Enter the two numbers for operations : ";
	cin>>a>>b;
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mdiv=a%b;
	cout<<"Addition of numbers : "<<add<<endl;
	cout<<"Subtraction of numbers : "<<sub<<endl;
	cout<<"Multiplication of numbers : "<<mul<<endl;
	cout<<"Division of numbers : "<<div<<endl;
	cout<<"Module division of numbers : "<<mdiv<<endl;
	return 0;
}
