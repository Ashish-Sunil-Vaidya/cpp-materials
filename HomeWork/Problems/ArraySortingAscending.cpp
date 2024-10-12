#include <iostream>
using namespace std;

int main()
{
   
   int n,*arr,temp;
   
   cout<<"Enter Size: ";
   cin>>n;
   
   arr=(int*)malloc(n*sizeof(int));
   cout<<endl<<"Enter array elements: ";

   for(int i=0;i<n;++i)
   cin>>arr[i];
   
  //  cout<<endl<<"Array elements accepted: ";

  //  for(int i=0;i<n;++i)
  //  cout<<arr[i];
   
   for(int i=0;i<n;++i)
    {
    for(int j=1+i;j<n;++j)
         {
         if(arr[j]<arr[i])
         {
          temp=arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
         }
         }
    }


   cout<<"\nSorted array elements: ";

   for(int i=0;i<n;++i)
   cout<<" "<<arr[i];

  free(arr);
   
   

 
}