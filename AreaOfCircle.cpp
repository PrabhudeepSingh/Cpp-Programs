//WRITE A PROGRAM TO FIND THE AREA AND CIRCUMFERENCE OF A CIRCLE
#include<iostream>
using namespace std;
int main()
{
	float r,a,c;
	
	cout<<"Enter the value of radius : ";
	cin>>r;

	c=2*3.14*r;	
	a=3.14*r*r;
	
	cout<<"\n\nCIRCUMFERENCE = "<<c<<"\nAREA = "<<a;
	
return 0;
}
