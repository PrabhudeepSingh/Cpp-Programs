//PROGRAM TO SHOW THE IMPORTANCE OF goto STATEMENT
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	
	for(i=0;i<10;i++)
	{
		cout<<"OUTER LOOP EXECUTING. i = "<<i<<endl;
		for(j=0;j<2;j++)
		{
			cout<<"    INNER LOOP EXECUTING. j = "<<j<<endl;
			if(i==3)
				goto stop;
		}
	}
	
	//THIS MESSAGE DOES NOT PRINT
	cout<<"LOOP EXITED. i = "<<i<<endl;
	
	stop : cout<<"JUMPED TO STOP. i = "<<i<<endl;
	
return 0;
}
