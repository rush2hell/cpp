#include<iostream>
using namespace std;
class hybrid1
{
	public:
		void func1()
		{
			cout<<"First class"<<endl;
		}
};
class hybrid2:public hybrid1
{
	public:
		void func2()
		{
			cout<<"Second class"<<endl;
		}
};
class hybrid3:public hybrid1
{
	public:
		void func3()
		{
			cout<<"Third class"<<endl;
		}
};
int main()
{
	hybrid2 h2;
	hybrid3 h3;
	h2.func1();
	h2.func2();
	h3.func3();
}
