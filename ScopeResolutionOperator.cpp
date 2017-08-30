//PROGRAM TO SHOW THE SCOPE RESOLUTION OPERATOR
#include<iostream>
using namespace std;
int amt=123;
int main()
{
	int amt=456;
	
	cout<<"GLOBAL VARIABLE : "<<::amt;
	cout<<"\nLOCAL VARIABLE : "<<amt;

return 0;
}
