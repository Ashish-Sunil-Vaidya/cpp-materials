#include <iostream>
using namespace std;

int main()
{   
    int i,j,x,y;
    cout<<"Enter Dimensions of hollow rectangle [X,Y]: ";
    cin>>x>>y;
    cout<<endl;

    for(i=0;i<x;++i)
    cout<<" * ";
    

    for(i=0;i<y-2;++i)
    {
    cout<<endl;

    for(j=0;j<x;++j)
    {
    if(j==0 || j==x-1)
    cout<<" * ";
    else cout<<"   ";
    }

    }
    
    cout<<endl;
    for(i=0;i<x;++i)
    cout<<" * ";
 
    return 0;
}