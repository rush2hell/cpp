#include<iostream>
using namespace std;
void check()
{
	int n;
	cout<<"Enter Number to find Even or Odd : ";
	cin>>n;
	if(n%2==0)
	{
		cout<<n<<" is Even ";
	}
	else
	{
		cout<<n<<" is Odd ";
	}
}
int main()
{
	check();
}
