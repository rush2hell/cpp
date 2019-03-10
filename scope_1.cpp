#include<iostream>
using namespace std;
int x=10;
int main()
{
	int x,z;
	cout<<"Enter the value of x : ";
	cin>>x;
	z=x+::x;
	cout<<"Addition of x with global is : "<<z<<endl;
	return 0;
}
