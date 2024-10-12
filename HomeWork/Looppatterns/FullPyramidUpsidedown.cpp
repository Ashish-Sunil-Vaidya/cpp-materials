#include <iostream>
using namespace std;

int main()
{ 

    int i,j,k,n,d;
  cout<<"Enter Dimension: ";
  cin>>n;
d=n;
for(i=0;i<n;++i)
    {
        cout<<endl;
        

        
        for(j=0;j<=i;++j)
        cout<<" ";

         --d;
          for(k=d+1;k>0;--k)
        cout<<"* ";

    }



    return 0;
}