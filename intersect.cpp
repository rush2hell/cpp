#include<iostream>
using namespace std;
int main()
{
	int a[5],b[4],p=0,q=0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value for first array : "<<endl;
		cin>>a[i];
	}
	for(int i=0;i<4;i++)
	{
		cout<<"Enter the value for secon array : "<<endl;
		cin>>b[i];
	}
	while(p<=5 && q<=4)
	{
		if(a[p] < b[q])
		{
			p++;
		}
		else if(b[q] < a[p])
		{
			q++;
		}
		else if(a[p] == b[q])
		{
			cout<<a[p]<<" ";
			p++;
			q++;
		}
	}
	return 0;
}
