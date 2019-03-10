#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number to check : ";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			cout<<n<<" is not Prime "<<endl;
			break;
		}
	}
	if(i>n/2)
	{
		cout<<n<<" is Prime"<<endl;
	}
	return 0;
}
