
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
        

        for(k=d+1;k>0;--k)
        cout<<" ";
        for(j=0;j<=i;++j)
        cout<<" *";

         --d;
          

    }




return 0;
}