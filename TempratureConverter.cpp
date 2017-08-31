//PROGRAM TO CONVERT TEMPRETURES FROM CELSIUS TO FAHRENHEIT OR FAHRENHEIT TO CELCIUS
#include<iostream>
using namespace std;
int main()
{
	int choice;
	float c,f;
	
	cout<<"1. CELCIUS TO FAHRENHEIT"<<endl;
	cout<<"2. FAHRENHEIT TO CELCIUS"<<endl;
	cout<<"\nENTER YOUR CHOICE HERE : ";
	cin>>choice;
	
	while(choice!=1&&choice!=2)
	{
		cout<<"\n\nWRONG CHOICE\nENTER YOUR CHOICE AGAIN : ";
		cin>>choice;
	}
	
	if(choice==1)
	{
		cout<<"\n\nENTER THE TEMPRETURE IN CELCIUS : ";
		cin>>c;
		f=(1.8*c)+32;
		cout<<"\nTEMPRATURE IN FAHRENHEIT : "<<f;
	}
	else
	{
		cout<<"\n\nENTER THE TEMPRATURE IN FAHRENHEIT : ";
		cin>>f;
		c=(f-32)/1.8;
		cout<<"\nTEMPRATURE IN CELCIUS : "<<c;
	}

return 0;
}
