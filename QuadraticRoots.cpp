//WAP TO FIND ROOTS OF A QUADRATIC EQUATION
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,r1,r2,disc,real,imag;
	
	cout<<"ENTER THE VALUE OF a : ";
	cin>>a;
	cout<<"ENTER THE VALUE OF b : ";
	cin>>b;
	cout<<"ENTER THE VALUE OF c : ";
	cin>>c;
	
	while(a<=0)
	{
		cout<<"\nERROR... THE VALUE OF a SHOULD BE A POSITIVE NUMBER.\n";
		cout<<"ENTER THE VALUE OF a AGAIN : ";
		cin>>a;
	}
	
	disc=b*b-4*a*c;
	
	if(disc>0)
	{
		cout<<"\nROOTS ARE REAL AND DISTINCT : \n";
		r1=(-b+sqrt(disc))/2*a;
		r2=(-b-sqrt(disc))/2*a;
		cout<<"\nFIRST ROOT : "<<r1;
		cout<<"\nSECOND ROOT : "<<r2;
	}
	
	else
		if(disc==0)
		{
			cout<<"\nROOTS ARE REAL AND EQUAL : \n";
			r1=(-b+sqrt(disc))/2*a;
			cout<<"\nFIRST ROOT : "<<r1;
			cout<<"\nSECOND ROOT : "<<r1;
		}
		
		else
		{
			cout<<"\nROOTS ARE IMAGINARY : \n";
			real=-b/2*a;
			imag=sqrt(-disc)/2*a;
			cout<<"\nFIRST ROOT : "<<real<<" + "<<imag<<"i";
			cout<<"\nSECOND ROOT " <<real<<" - "<<imag<<"i";
		}

return 0;
}
