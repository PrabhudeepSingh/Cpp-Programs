//PROGRAM TO FIND GREATEST OF THREE NUMBER USING CONDITIONAL CONTROL STATEMENT
#include<iostream>
using namespace std;
int main()
{
	int x,y,z,large;
	
	cout<<"ENTER FIRST INTEGER : ";
	cin>>x;
	
	cout<<"ENTER SECOND INTEGER : ";
	cin>>y;
	
	cout<<"ENTER THIRD INTEGER : ";
	cin>>z;

	cout<<endl;
	
	large=(x>y)?(x>z?x:z):(y>z?y:z);
	
	cout<<large<<" IS LARGEST";
	
return 0;
}
