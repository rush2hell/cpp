#include<iostream>
using namespace std;
class demo
{
	public:
	void display()
	{
		cout<<"Super class"<<endl;
	}
		
};
class demo2:public demo
{
	public:
		void show()
		{
			cout<<"Derived Class"<<endl;
		}
};
int main()
{
	demo2 d;
	d.display();
	d.show();
	return 0;
}
