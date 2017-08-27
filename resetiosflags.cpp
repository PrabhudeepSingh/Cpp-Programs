//PROGRAM TO SHOW THW USE OF resetiosflags
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<hex<<setiosflags(ios::showbase);
	cout<<100<<endl;
	cout<<resetiosflags(ios::showbase)<<100<<endl;
	
return 0;
}
