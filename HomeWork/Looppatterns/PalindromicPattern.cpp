#include <iostream>
using namespace std;

int main()
{
    int i,j,n,cnt;
  
  cout<<"Enter dimension of palindromic pattern: ";
  cin>>n;

  for(i=0;i<n;++i)
  {
    cout<<endl;
   
    for(j=n-i;j>0;--j) cout<<"  ";
  cnt=i+1;
    
    for(j=0;j<=i;++j,--cnt) cout<<cnt<<" ";
    cnt=2;
    for(j=0;j<i;++j,++cnt) cout<<cnt<<" ";
  }
    
}
