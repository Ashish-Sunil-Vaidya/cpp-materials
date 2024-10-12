#include <iostream>
using namespace std;

int main()
{   
    int n,i,j;

    cout<<"Enter dimension of the R.H.S. Half pyramid: ";
    cin>>n;

    for(i=0;i<n;++i)
    {
        cout<<endl;
        for(j=0;j<=i;++j)
        cout<<"* ";
    }




    return 0;
}