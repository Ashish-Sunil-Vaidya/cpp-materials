#include <iostream>
using namespace std;

int main()
{   
    int i,j,x,y;

    cout<<"Enter Dimensions of rectangle [X,Y]: ";
    cin>>x>>y;
  

for(i=0;i<y;++i)
{
    cout<<endl;
    for(j=0;j<x;++j)
    cout<<" * ";
}


    return 0;
}