#include<iostream>
using namespace std;
int main()
{
	int x;
	
	cout<<"ENTER A NUMBER (between 1 and 8): ";
	cin>>x;
	
	while(x<1||x>8)
	{
		cout<<endl<<"ERROR... RANGE IS 1 - 8"<<endl<<"ENTER AGAIN : ";
		cin>>x;
	}
	
	cout<<endl;
	
	switch(x)
	{
		case 1 : cout<<"COLOUR IS WHITE"; break;
		case 2 : cout<<"COLOUR IS BLACK"; break;
		case 3 : cout<<"COLOUR IS GREEN"; break;
		case 4 : cout<<"COLOUR IS RED"; break;
		case 5 : cout<<"COLOUR IS BROWN"; break;
		case 6 : cout<<"COLOUR IS BLUE"; break;
		case 7 : cout<<"COLOUR IS GRAY"; break;
		case 8 : cout<<"COLOUR IS YELLOW"; break;
	}
	
return 0;
}
