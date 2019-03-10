#include<iostream>
using namespace std;
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter number of array : ";
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Elements of Array "<<a[i]<<endl;
	}
	return 0;
}
