//PROGRAM TO SHOW THE USE OF setiosflags
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int value;
	
	cout<<"ENTER A NUMBER.";
	cin>>value;
	
	cout<<setiosflags(ios::showbase);
	cout<<setiosflags(ios::dec);
	cout<<"DECIMAL = "<<value<<endl;
	cout<<setiosflags(ios::hex);
	cout<<"HEXADECIMAL = "<<value<<endl;
	cout<<setiosflags(ios::oct);
	cout<<"OCTAL = "<<value<<endl;
	
return 0;
}
