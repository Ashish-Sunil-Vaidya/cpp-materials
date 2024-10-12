#include <iostream>
using namespace std;

int main()
{  
    int i,j,k,n;

    cout<<"Enter Dimensions: ";
   cin>>n;
   
   for(i=0;i<n;++i)
   {
    cout<<endl;
  for(j=n-i;j>0;--j) cout<<" ";

  for(j=0;j<n;++j) cout<<"* ";



   }



    return 0;
}