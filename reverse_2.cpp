#include <iostream>
using namespace std;
void check(int n)
{
	int ans = 0, remainder;
    while(n!=0)
    {
        remainder=n%10;
        ans=ans*10+remainder;
        n/=10;
    }
	cout << "Reversed Number = " << ans;
}
int main()
{
	check(345);
}
