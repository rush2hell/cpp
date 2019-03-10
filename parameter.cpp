#include<iostream>
using namespace std;
class argument
{
	public:
		argument(int x,int y)
		{
			cout<<"Addition : "<<x+y;
		}
};
int main()
{
	argument a(12,2);
}
