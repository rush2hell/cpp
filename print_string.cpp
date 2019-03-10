#include<iostream>
using namespace std;
int main()
{
	static char name[]="Klinsman";
	int i;
	i=0;
	while(i<=7)
	{
		cout<<"Printed String is  : "<<name[i]<<endl;
		i++;
	}
	return 0;
}
