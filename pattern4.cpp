#include<iostream>
using namespace std;
int main()
{
	int pre,next,r=2;
	for(int i=1;i<6;i++)
	{	
		pre=1;
		next=2;
		for(int j=1;j<=i;j++)
		{	
			cout<<pre;
			next=pre*r;
			pre=next;		
		}
			cout<<endl;
	}
	return 0;
}
