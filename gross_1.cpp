#include<iostream>
using namespace std;
void gross_sal();
void gross_sal()
{
	float basic, hra, da, pf, gross;
	char name[20];
	cout<<"Enter the Name of Employee : ";
	cin>>name;
	cout<<"Enter the Basic Salary : ";
	cin>>basic;
	cout<<"Enter the HRA : ";
	cin>>hra;
	cout<<"Enter the DA allowance : ";
	cin>>da;
	pf= (basic*12)/100;
	gross=basic+da+hra+pf;
	cout<<"Gross Salary of Employee "<<name<<endl;
	cout<<gross;
}
int main()
{
	gross_sal();
}

