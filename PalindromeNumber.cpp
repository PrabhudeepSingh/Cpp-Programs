//PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
#include<iostream>
using namespace std;
int main()
{

	int n,rev=0,temp;

	cout<<"ENTER A NUMBER : ";
	cin>>n;
  
	temp=n;

	while(temp!=0)
	{
    	rev = rev*10;
    	rev = rev+temp%10;
 	    temp = temp/10;
	}

	if(n==rev)
		cout<<endl<<"NUMBER IS PALINDROME.";
	else
		cout<<endl<<"NUMBER IS NOT PALINDROME.";
		
return 0;
}
