//PROGRAM TO SHOW THE USE OF dec,oct,hex MANIPULATOR
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int value;
	
	cout<<"ENTER NUMBER : "<<endl;
	cin>>value;
	cout<<"DECIMAL BASE = "<<dec<<value<<endl;
	cout<<"HEXADECIMAL BASE = "<<hex<<value<<endl;
	cout<<"OCTAL BASE = "<<oct<<value<<endl;

return 0;
}
