#include<iostream>
using namespace std;
int main()
{
	int fact,no;
	for(int i=0;i<5;i++)
	{
		fact=1;
		no=1;
		for(int j=0;j<=i;j++)
		{
			fact=fact*no;
			no++;
			cout<<fact;
		}
		cout<<endl;
	}
	return 0;
}
