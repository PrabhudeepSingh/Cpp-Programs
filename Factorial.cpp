//PROGRAM TO CALCULATE THE FACTORIAL OF A NUMBER
#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,i;
	
	cout<<"ENTER THE NUMBER WHOSE FACTORIAL IS TO BE CALCLATED : ";
	cin>>n;
	
	while(n<1)
	{
		cout<<endl<<"ENTER A POSITIVE NUMBER : ";
		cin>>n;
	}
	
	for(i=1;i<=n;i++)
		fact=fact*i;
	
	cout<<endl<<"FACTORIAL OF "<<n<<" IS "<<fact;
	
return 0;
}
