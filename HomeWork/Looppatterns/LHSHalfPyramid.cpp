#include <iostream>
using namespace std;

int main()
{   
    int n,i,j,k;
   cout<<"Enter Dimension of L.H.S. half Pyramid: ";
   cin>>n;
   k=n;
   for(i=0;i<n;++i)
    {
        cout<<endl;
        
        --k;
        for(j=k;j>0;--j)
        {
        cout<<"  ";
        
        }


        for(j=0;j<=i;++j)
        cout<<" *";
    
        
    }







    return 0;
}