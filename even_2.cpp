#include<iostream>
using namespace std;
void check(int n)
{
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
	check(8);
}
