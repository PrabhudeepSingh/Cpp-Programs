//PROGRAM TO SHOW THE SIGNIFICANCE OF BITWISE OPERATOR
#include<iostream>
using namespace std;
int main()
{
	int d1=5,d2=6,d3;
	cout<<"d1 = "<<d1<<"\nd2 = "<<d2;
	
	d3=d1&d2;
	cout<<"\nBITWISE AND d1 & d2 = "<<d3;
	
	d3=d1|d2;
	cout<<"\nBITWISE OR d1 | d2 = "<<d3;
	
	d3=d1^d2;
	cout<<"\nBITWISE XOR d1 & d2 = "<<d3;
	
	d3=~d1;
	cout<<"\nONES COMPLEMENT OF d1 = "<<d3;
	
	d3=d1<<2;
	cout<<"\nLEFT SHIFT d1 BY 2 BITS <<2 = "<<d3;
	
	d3=d1>>2;
	cout<<"\nLEFT SHIFT d1 BY 2 BITS >>2 = "<<d3;
	
return 0;

}
