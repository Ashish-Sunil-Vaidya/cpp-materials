#include<iostream>
using namespace std;

int main()
{
int n,*arr,elmnt;
   
   cout<<"Enter Size: ";
   cin>>n;
   
   arr=(int*)malloc(n*sizeof(int));
   cout<<endl<<"Enter array elements: ";

   for(int i=0;i<n;++i)
   cin>>arr[i];

   cout<<"Find? => ";
   cin>>elmnt;

   for(int i=0;i<n;++i)
   {
     if(arr[i]==elmnt) cout<<"Element '"<<elmnt<<"' is at index ["<<i<<"]"<<endl;; 
   }
return 0;
}