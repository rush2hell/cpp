#include<iostream>
using namespace std;
int main()
{
	static char name[]="rushabh";
	char *ptr;
	ptr=name;
	while(*ptr!='\0')
	{
		cout<<*ptr;
		ptr++;
	}
	return 0;
}
