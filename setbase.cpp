//PROGRAM TO SHOW THE USE OF setbase MANIPULATOR
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int value;
	
	cout<<"ENTER NUMBER : ";
	cin>>value;
	
	cout<<endl<<"DECIMAL BASE = "<<setbase(10);
	cout<<value<<endl;
	
	cout<<"HEXADECIMAL BASE = "<<setbase(16);
	cout<<value<<endl;
	
	cout<<"OCTAL BASE = "<<setbase(8);
	cout<<value<<endl;
	
return 0;
}
