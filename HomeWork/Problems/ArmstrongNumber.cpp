#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int n,dn,ld,sum=0;
    cout<<"Enter a integer: ";
    cin>>n;
    dn=n;
    while(n!=0)
    {
    ld=n%10;
    sum+=pow(ld,3);
    n/=10;
    }

    if(sum==dn) cout<<dn<<" is a armstrong number";
    else cout<<dn<<" is a not armstrong number";
}