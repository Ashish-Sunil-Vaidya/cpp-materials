#include <iostream>
using namespace std;

int main()
{
  int i,j,n;
   
   cout<<"Enter Dimension: ";
  cin>>n;

for(i=0;i<n;++i)
    {   
      if(i!=n-1)
        cout<<endl;
        

        for(j=n-i;j>0;--j)
        cout<<"   ";

        if(i!=n-1)
        for(j=0;j<=i;++j)
        cout<<"     *";
        
  
      }
    


    for(i=0;i<n;++i)
    {

   cout<<endl;
    for(j=0;j<=i;++j)
          cout<<"   "; 
          for(j=n-i;j>0;--j) 
           cout<<"     *";
          
          

    }


    return 0;
}