//PROGRAM TO PRINT FIBONACCI SERIES
#include<iostream>
using namespace std;
int main()
{
	long prev=0,current=1,next,n,i;
	
	cout<<"ENTER THE NUMBER UPTO YOU WANT FIBONACCI SERIES : ";
	cin>>n;
	
	while(n<2||n>25)
	{
		cout<<endl<<"RANGE IS 2 - 25 : "<<endl<<"ENTER AGAIN : ";
		cin>>n;
	}
	cout<<endl<<prev;
	cout<<endl<<current;
	
	for(i=3;i<=n;i++)
	{
   		next=prev+current;
    	cout<<endl<<next;
    	prev=current;
    	current=next;
	}

return 0;
}
