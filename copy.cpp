#include<iostream>
using namespace std;
class demo
{
	public:
		demo()
		{
			cout<<"Copy Contructor"<<endl;
		}
		demo(int x,int y)
		{
			cout<<"Addition of numbers :"<<x+y<<endl;
		}
};
int main()
{
	demo c1;
	demo c2(10,20);
}
