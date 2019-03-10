#include<iostream>
using namespace std;
class multiple
{
	public:
		void mul()
		{
			cout<<"First class"<<endl;
		}
};
class multiple2:public multiple
{
	public:
		void mul2()
		{
			cout<<"Second Class"<<endl;
		}
};
class multiple3:public multiple2
{
	public:
		void mul3()
		{
			cout<<"Third class"<<endl;
		}
};
int main()
{
	multiple3 m;
	m.mul();
	m.mul2();
	m.mul3();
}
