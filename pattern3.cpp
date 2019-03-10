#include<iostream>
using namespace std;
int main()
{
	int f_no,s_no,sum;
	for(int i=0;i<5;i++)
	{
		f_no=0;
		s_no=1;
		for(int j=0;j<=i;j++)
		{
			cout<<f_no;
			sum=f_no+s_no;
			f_no=s_no;
			s_no=sum;
		}
			cout<<endl;
	}
	return 0;
}
