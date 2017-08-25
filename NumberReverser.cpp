//PROGRAM to find the reverse of a number
#include<iostream>
using namespace std;
int main()
{

  int n,rev=0,temp;

  cout<<"ENTER A NUMBER : ";
  cin>>n;
  
  temp=n;

  while(temp!=0)
  {
    rev = rev*10;
    rev = rev+temp%10;
    temp = temp/10;
  }

 cout<<"\nTHE REVERSE OF THE NUMBER IS : "<<rev;

return 0;
}
