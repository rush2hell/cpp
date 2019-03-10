#include<iostream>
using namespace std;
int main()
{
	int a[5],b[4],c[5],n1=0,n2=0,n3=0,i,j;
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
	for(i=0;i<n1;i++)
	{
		c[n3]=a[i];
		n3++;
	}
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n3;j++)
		{
			if(b[i]==c[j])
			{
				break;
			}
		}
		if(j==n3)
		{
			c[n3]=b[i];
			n3++;
		}
		cout<<n3;
	}
	return 0;
}
