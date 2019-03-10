#include<iostream>
using namespace std;
class function
{
	public:
	void add(int x,int y);
	void sub(int x,int y);
	void multiply(int x,int y);
};
int main()
{
	function f;
	f.add(10,20);
	f.sub(5,3);
	f.multiply(3,2);
}
void function::add(int x,int y)
{
	cout<<"Addition : "<<x+y<<endl;
}
void function::sub(int x,int y)
{
	cout<<"Subtract : "<<x-y<<endl;
}
void function::multiply(int x,int y)
{
	cout<<"Multiply : "<<x*y<<endl;
}

