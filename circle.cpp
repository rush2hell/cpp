//program to find area of circle,area of square,area of rectangle
#include<iostream>
using namespace std;
int main()
{
	int r,l,w,h,rect,sq;
	float circle;
	cout<<"Enter the radius of Circle : ";
	cin>>r;
	circle=3.14*r*r;
	cout<<"Enter the Length of side : ";
	cin>>l;
	sq=l*l;
	cout<<"Enter the width and height of rectangle : ";
	cin>>w>>h;
	rect=w*h;
	cout<<"Area of Circle : "<<circle<<endl;
	cout<<"Area of Square : "<<sq<<endl;
	cout<<"Area of Rectangle : "<<rect<<endl;
	return 0;
}
