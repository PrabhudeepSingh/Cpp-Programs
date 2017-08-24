#include<iostream>
using namespace std;

void printarray(int a[],int);

int main()
{
	int n;		
	cout<<"ENTER THE SIZE OF THE ARRAY : ";
	cin>>n;
	
	while(n<1||n>10)
	{
		cout<<endl<<"ERROR... RANGE OF SIZE OF ARRAY IS 1-10"<<endl<<"ENTER THE SIZE AGAIN : ";
		cin>>n;
	}
	int a[n];
	
	cout<<endl<<"ENTER THE ELEMENTS"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
		
	cout<<endl<<"THE ELEMENTS ARE :";
	
	printarray(a,n);

return 0;
}

void printarray(int arr[],int num)
{
	for (int i=0;i<num;i++)
	{
		cout<<endl<<"a["<<i<<"] = "<<arr[i];
	}
}

