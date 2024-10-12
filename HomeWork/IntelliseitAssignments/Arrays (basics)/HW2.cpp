// WAP to accept 10 elements from the user in an array and copy them into another array.

#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter size of arr1 and arr2: ";
    int SIZE;
    cin>>SIZE;

    cout<<endl<<"Enter "<<SIZE<<" elements in the array: ";
    int arr1[SIZE];
    for(int i=0 ; i<SIZE ; i++)
        cin>>arr1[i];

    cout<<endl<<"arr1 = { ";
    for(int i=0 ; i<SIZE ; i++)
        cout<<arr1[i]<<" ";
    cout<<"}"<<endl<<endl;

    cout<<"Copying to arr2..."<<endl<<endl;
    int arr2[SIZE];
    for(int i=0 ; i<SIZE ; i++)
    {   
        cout<<"Copying arr1["<<i<<"] to arr2["<<i<<"]..."<<endl;
        arr2[i]=arr1[i];
    }
    cout<<endl<<"Elements copied succesfully!"<<endl<<endl;

    cout<<"arr2 = { ";
    for(int i=0 ; i<SIZE ; i++)
        cout<<arr2[i]<<" ";
    cout<<"}";


    return 0;
}