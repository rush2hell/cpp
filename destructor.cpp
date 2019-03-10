#include<iostream>
using namespace std;
class destruct
{
	public:
	destruct()
	{
		cout<<"Constructor called"<<endl;
	}
	~destruct()
	{
		cout<<"Destructor called"<<endl;
	}
};
int main()
{
	destruct d;
}
