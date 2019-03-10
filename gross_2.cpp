#include<iostream>
using namespace std;
void gross_sal(int basic,int hra,int da);
void gross_sal(int basic,int hra,int da)
{
	float pf, gross;
	pf= (basic*12)/100;
	gross=basic+da+hra+pf;
	cout<<"Gross Salary of Employee "<<endl;
	cout<<gross;
}
int main()
{
	gross_sal(450000,45000,2300);
}
