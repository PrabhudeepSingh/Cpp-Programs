//PROGRAM TO ENTER SALARY AND OUTPUT INCOME TAX AND NET SALARY
#include<iostream>
using namespace std;
int main()
{
	int itrate;
	float sal,itax,nsal=0;
	
	cout<<"ENTER THE SALARY : ";
	cin>>sal;
	
	if(sal>15000)
	{
		itax=sal*0.3;
		itrate = 30;
	}
	else
		if(sal>7000)
		{
			itax=sal*0.2;
			itrate=20;
		}
		else
		{
			itax=sal*0.1;
			itrate=10;
		}
		
	nsal=sal-itax;
	
	cout<<"\nSALARY = "<<sal<<endl;
	cout<<"INCOME TAX  @"<<itrate<<"% = "<<itax<<endl;
	cout<<"YOUR NET SALARY = "<<nsal;
	
return 0;
}
