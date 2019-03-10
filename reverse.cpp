#include <iostream>
using namespace std;
int main()
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
	return 0;
}
