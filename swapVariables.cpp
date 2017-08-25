//WRITE A PROGRAM TO SWAP TWO VARIABLES
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	
	cout<<"ENTER THE VALUE OF a : ";
	cin>>a;
	
	cout<<"ENTER THE VALUE OF b : ";
	cin>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n\nVALUES AFTER SWAPPING :\n";
	cout<<"a = "<<a;
	cout<<"\nb = "<<b;
	
return 0;
}
