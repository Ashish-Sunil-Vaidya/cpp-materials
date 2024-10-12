#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n,flag=0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if(n<=2) cout<<n<<" is neither prime nor composite";
    else{
    for(int i=2;i<sqrt(n);++i)
    {  
       if(n%i==0)
       {
        cout<<n<<" is a Composite number";
        flag=1;
       }
    }

    if(flag==0) cout<<n<<" is a Prime Number";
       }
return 0;
}
