#include <iostream>
using namespace std;

int main()
{ 
    int i,j,n;
    cout<<"Enter Dimension: ";
    cin>>n;

   for(i=0;i<n;++i)
   {
    cout<<endl;
    for(j=n-i;j>0;--j)
    cout<<"  ";
    cout<<"*";
    for(j=0;j<i-1;++j)
    cout<<"    ";
    for(j=0;j<1;++j)
    {if(i!=0)
    cout<<"   *";
    }
    for(j=n-i;j>1;--j)
    cout<<"  ";
    for(j=n-i;j>2;--j)
    cout<<"  ";
    for(j=0;j<1;++j)
       {if(i!=n-1)
    cout<<" *";
    }

    for(j=0;j<i;++j){
    if(j==i-1)
    cout<<"   *";
    else cout<<"    ";
    }

    

   }
   

    return 0;
}