#include <iostream>
using namespace std;

int main()
{
int n,i,j,cnt=1;
cout<<"Enter the dimensions: ";
cin>>n;

for(i=0;i<n;++i)
{
    cout<<endl;
    for(j=0;j<=i;++j,++cnt)
    cout<<cnt<<" ";

}

    return 0;
}

