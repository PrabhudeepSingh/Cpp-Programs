//PROGRAM TO SHOW THE CONCEPT OF TYPE CASTING IN C++
#include<iostream>
using namespace std;
int main()
{
	int a;
	float b,c;
	
	cout<<"ENTER THE VALUE OF a : ";
	cin>>a;
	
	cout<<"ENTER THE VALUE OF b : ";
	cin>>b;
	
	c=float(a)+b;
	cout<<"\nTHE VALUE OF c is : "<<c;
	
return 0;
}
