//PROGRAM TO FIND GREATEST OF THREE NUMBERS USING IF-ELSE LADDER
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	
	cout<<"ENTER FIRST INTEGER : ";
	cin>>x;
	
	cout<<"ENTER SECOND INTEGER : ";
	cin>>y;
	
	cout<<"ENTER THIRD INTEGER : ";
	cin>>z;

	cout<<endl;
	
	if(x>y&&x>z)
		cout<<x<<" IS GREATEST";
	else
		if(y>x&&y>z)
			cout<<y<<" IS GREATEST";
		else
			cout<<z<<" IS GREATEST";
			
return 0;
}
