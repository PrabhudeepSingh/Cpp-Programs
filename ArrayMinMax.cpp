//PROGRAM TO FIND MAX AND MIN OF AN ARRAY
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout<<"ENTER THE SIZE OF THE ARRAY : ";
	cin>>n;
	
	while(n<1||n>10)
	{
		cout<<endl<<"ERROR... THE RANGE OF SIZE IS 1-10"<<endl<<"ENTER THE SIZE AGAIN : ";
		cin>>n;
	}
	
	float a[n],min,max;
	
	cout<<endl<<"ENTER THE ELEMENTS\n";
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	
	min=a[0];
	max=a[0];
	
	//FINDING THE MIN AND MAX ELEMENTS
	
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
			
		if(a[i]>max)
			max=a[i];	
	}
	
	cout<<endl<<"MINIMUM ELEMENT IN ARRAY IS "<<min;
	cout<<endl<<"MAXIMUM ELEMENT IN ARRAY IS "<<max;
	
return 0;
}
