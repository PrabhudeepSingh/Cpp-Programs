//PROGRAM TO FIND THE SUM OF DIGITS IF A NUMBER
#include<iostream>
using namespace std;
int main()
{
	int num,x,sum=0;
	
	cout<<"ENTER A POSITIVE NUMBER : ";
	cin>>num;
	
	while(num>0)
	{
		x=num%10;
		sum+=x;
		num/=10;
	}
	
	cout<<endl<<"SUM OF DIGITS = "<<sum;
	
return 0;
}
