#include<iostream>
using namespace std;
void arr(int num[5]);
void arr(int num[5])
{
	for(int i=0;i<5;i++)
	{
 		cout<<"All Elements : "<<num[i]<<endl;
	}
}
int main()
{
	int num[5]={1,2,3,4,5};
	arr(num);
	return 0;
}
