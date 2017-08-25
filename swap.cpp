//WRITE A PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	
	cout<<"ENTER THE VALUE OF a : ";
	cin>>a;
	
	cout<<"ENTER THE VALUE OF b : ";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"\n\nVALUES AFTER SWAPPING :\n";
	cout<<"a = "<<a;
	cout<<"\nb = "<<b;
	
return 0;
}
