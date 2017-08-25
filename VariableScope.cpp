#include<iostream>
using namespace std;
int amount = 123;
int main()
{
	int amount = 456;
	cout<<"GLOBAL VARIABLE : "<<::amount;
	cout<<"\nLOCAL VARIABLE : "<<amount;
	return 0;
}
