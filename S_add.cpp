#include<iostream>
using namespace std;
class Add1
{
	public:
		int add(int x,int y)
		{
			return x+y;
		}
};
class Add2:public Add1
{
	public:
		int add2(int x,int y)
		{
			return x+y;
		}
};
int main()
{
	Add2 a;
	int sum=a.add(12,3);
	int sum1=a.add2(11,2);
	cout<<sum<<endl;
	cout<<sum1;
}
