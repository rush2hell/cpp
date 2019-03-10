#include<iostream>
using namespace std;
class scope3
{
	public:
	static int x;
};
static scope3::x=12;
int main()
{
	cout<<"Value : "<<scope3.x;
}
