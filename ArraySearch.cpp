#include<iostream>
using namespace std;
int main()
	{	
		int i,n,x,m;
		cout<<"\nENTER THE SIZE OF THE ARRAY : ";
		cin>>n;
		while(n<0||n>10)
		{
			cout<<"\nERROR... THE RANGE OF SIZE OF ARRAY IS 1-10 ";
			cout<<"\nENTER THE SIZE AGAIN : ";
			cin>>n;
		}
		int a[n];
		cout<<"\n";
		for(i=0;i<n;i++)
			{
				cout<<"ENTER THE "<<i+1<<" ELEMENT : ";
				cin>>a[i];
			}
		cout<<"\nTHE ELEMENTS ARE : ";
		for (i=0;i<n;i++)
			{
				cout<<"\n"<<i+1<<". "<<a[i];
			}
		cout<<"\n\nENTRE THE ELEMENT TO BE SEARCHED:";
		cin>>m;
		x=0;
		while(x<n && m!=a[i])
			{
				x++;
			}
		if(x<n)
			{
				cout<<"\n ELEMENT FOUND AT"<<x<<" POSITION";
			}
		else
			{
				cout<<"\n ELEMENT NOT FOUND";
			}
		return 0;
	}
