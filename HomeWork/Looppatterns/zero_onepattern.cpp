#include <iostream>
using namespace std;

int main()
{
   
   int i,j,n;

   cout<<"Enter Dimensions: ";
   cin>>n;

   for(i=1;i<n+1;++i)
   {
    cout<<endl;
     for(j=0;j<i;++j)
     {
     if((i+j)%2) cout<<"1 ";
     if((i+j)%2==0) cout<<"0 ";
    }
    
    }
   



    return 0;
}