//PROGRAM TO DEMONSTRATES INCREMENT AND DECREMENT OPERATOR
#include<iostream>
using namespace std;
int main()
{
	int x=10,y=0;
	
	cout<<"x = "<<x;
	
	y=++x;
	cout<<"\ny = ++x ; y = "<<y;
	
	y=x++;
	cout<<"\ny = x++ ; y = "<<y;
	
	y=--x;
	cout<<"\ny = --x ; y = "<<y;
	
	y=x--;
	cout<<"\ny = x-- ; y = "<<y;
	
return 0;
}
