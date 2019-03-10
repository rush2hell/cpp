#include <iostream>
using namespace std;
void check()
{
	int n, ans = 0, remainder;
	cout << "Enter an number : ";
    cin >> n;

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
	check();
}
