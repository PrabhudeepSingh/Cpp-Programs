#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int upper=0,lower=0,dig=0,space=0,other=0,i;
	
	cout<<"ENTER THE LINE OF TEXT BELOW : \n\n";
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
			upper++;
		else
			if(a[i]>='a'&&a[i]<='z')
				lower++;
			else
				if(isdigit(a[i]))
					dig++;
				else
					if(a[i]==' ')
						space++;
					else
						other++;
	}
	
	cout<<"\nUPPER CASE CHARACTERS : "<<upper;
	cout<<"\nLOWER CASE CHARACTERS : "<<lower;
	cout<<"\nDIGITS : "<<dig;
	cout<<"\nSPACES : "<<space;
	cout<<"\nOTHER CHARACTERS : "<<other;

return 0;
}
