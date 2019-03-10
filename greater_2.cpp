#include<iostream>
using namespace std;
int g_no(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	g_no(2,4);
}
