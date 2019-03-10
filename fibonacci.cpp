#include<iostream>
using namespace std;
int main()
{
	int sum=1,f_no=0,s_no=1,n=2;
	for(int i=0;i<=n;i++)
	{
		sum=f_no+s_no;
		f_no=s_no;
		s_no=sum;
	cout<<"Fibonnaci series : "<<sum<<endl;
	}
	return 0;
}
