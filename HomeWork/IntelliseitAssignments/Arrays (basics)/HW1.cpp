// 1. WAP to accept 10 elements from the user in an array and find out the smallest and largest element among them.

#include <iostream>
using namespace std;

int main()
{   
    cout<<"Enter no of elements inside the array: ";
    int SIZE;
    cin>>SIZE;

    cout<<"Enter "<<SIZE<<" elements in the array: ";
    int array[SIZE];
    for(int i=0 ; i<SIZE ; i++)
        cin>>array[i];

    int max=array[0];
    int min=array[0];
    for(int i=0 ; i<SIZE ; i++)
    {   
        if(array[i]>max)
            max=array[i];
       
        if(array[i]<min)
            min=array[i];
    }

    cout<<"Largest element inside array is --> "<<max<<endl;
    cout<<"Smallest element inside array is --> "<<min<<endl;

    return 0;
}