//PROGRAM TO ENTER MONTH NUMBER AND DISPLAY MONTH NAME
#include<iostream>
using namespace std;
int main()
{
	int mth;
	
	cout<<"ENTER THE MONTH NUMBER : ";
	cin>>mth;
	
	while(mth<1||mth>12)
	{
		cout<<endl<<"WRONG INPUT"<<endl<<"THE RANGE FOR MONTH NUMBER IS 1 - 12"<<endl<<"ENTER THE MONTH NUMBER AGAIN : ";
		cin>>mth;
	}
	
	cout<<endl<<"THE MONTH IS : ";
	
	switch(mth)
	{
		case 1 : cout<<"JANUARY"; break;
		case 2 : cout<<"FEBURARY"; break;
		case 3 : cout<<"MARCH"; break;
		case 4 : cout<<"APRIL"; break;
		case 5 : cout<<"MAY"; break;
		case 6 : cout<<"JUNE"; break;
		case 7 : cout<<"JULY"; break;
		case 8 : cout<<"AUGUST"; break;
		case 9 : cout<<"SEPTEMBER"; break;
		case 10 : cout<<"OCTOBER"; break;
		case 11 : cout<<"NOVEMBER"; break;
		case 12 : cout<<"DECEMEBER"; break;
	}
	
return 0;

}
