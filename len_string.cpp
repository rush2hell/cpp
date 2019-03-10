#include<iostream>
using namespace std;
int main()
{
	static char name[]="rushabh";
	int i;
	i=0;
	while(name[i]!='\0')
	{
		i++;
	}
	cout<<i;
	return 0;
}
