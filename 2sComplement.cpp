#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char num[20];
	cout<<"ENTER THE BINARY NUMBER : ";
	cin>>num;
	int i;
	for(i=strlen(num);i>=0;i--)
		if (num[i]=='1')
		break;
	
	for(int j=i-1;j>=0;j--)
		if(num[j]=='1')
		   num[j]='0';
	    else 
		   num[j]='1';
	       
	
	cout<<"\nCOMPLEMENT OF THE NUMBER IS : "<<num<<"\n";
	return 0;
}
