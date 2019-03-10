#include <iostream>
using namespace std;
int check(int n)
{
	int ans = 0, remainder;
    while(n!=0)
    {
        remainder=n%10;
        ans=ans*10+remainder;
        n/=10;
    }
	return ans;
}
int main()
{
	check(345);
}
