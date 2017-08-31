//PROGRAM TO ENTER THE THREE INTEGERS AND OUTPUT THE SMALLEST INTEGER USING IF STATEMENT
#include<iostream>
using namespace std;
int main()
{
	int x,y,z,small;
	
	cout<<"ENTER FIRST INTEGER : ";
	cin>>x;
	
	cout<<"ENTER SECOND INTEGER : ";
	cin>>y;
	
	cout<<"ENTER THIRD INTEGER : ";
	cin>>z;
	
	small=x;
	
	if(y<small)
		small=y;
		
	if(z<small)
		small=z;
		
	cout<<"\nSMALLEST INTEGER OUT OF "<<x<<", "<<y<<" & "<<z<<" is : "<<small;
	
return 0;
}
