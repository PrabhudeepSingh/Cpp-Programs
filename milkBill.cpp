//PROGRAM TO CALCULATE MILK BILL
#include<iostream>
using namespace std;
int main()
{
	float kg[20],fat[20],ttl[20],sum=0,price,total;
	int i;
	
	for(i=0;i<20;i++)
	{
		cout<<"ENTER KG's OF MILK ON "<<i+1<<" DAY : ";
		cin>>kg[i];
		
		cout<<"ENTER FAT OF MILK ON "<<i+1<<" DAY : ";
		cin>>fat[i];
		
		cout<<endl; 
	
		ttl[i]=kg[i]*fat[i];
		
		sum+=ttl[i];
	}
	
	cout<<"ENTER Rs. PER FAT : ";
	cin>>price;
	
	total=price*sum;
	
	cout<<endl<<endl<<"TOTAL AMOUNT = "<<total;
	
return 0;
}
