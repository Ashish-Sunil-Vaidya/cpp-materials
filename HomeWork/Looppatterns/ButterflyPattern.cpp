#include <iostream>
using namespace std;

int main()
{   
  
    int n,i,j,d,k;
    
    cout<<"Enter dimension: ";
    cin>>n;
d=n;

    
    
    for(i=0;i<n;++i)
    {
        cout<<endl;
        for(j=0;j<=i;++j)
        cout<<" *";
           
         --d;
          for(k=d;k>0;--k)
        cout<<"    ";

        for(j=0;j<=i;++j)
        cout<<"* ";
    }
  

d=n;
  for(i=0;i<n;++i)
  {
    cout<<endl;
    --d;
    for(j=d+1;j>0;--j)
        cout<<" *";
         
        
         for(k=0;k<i;++k)
        cout<<"    ";
     
     for(j=d+1;j>0;--j)
        cout<<"* ";
         

  }

   









    return 0;
}