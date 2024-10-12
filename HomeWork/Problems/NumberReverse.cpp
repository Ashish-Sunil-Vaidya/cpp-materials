#include <iostream>

using namespace std;

int main()
{
  int n,reverse;
  cout<<"Enter a positive integer: ";
  cin>>n;
  
  while(n!=0)
  {  
    int ld=n%10;
    reverse=10*reverse + ld;
    n/=10;
  }
  cout<<"Reverse: "<<reverse;

   return 0; 
}

