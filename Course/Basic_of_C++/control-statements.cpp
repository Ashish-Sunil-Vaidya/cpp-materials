#include <iostream>
using namespace std;

int main()
{
    int a,b,c,i;
    cout<<"Enter any three integers"<<endl;
    cin>>a>>b>>c;

    //********************************* if else ********************************** 

    if(a>b && a>c)
    cout<<"'a' has the greatest value"<<endl;
    if(b>a && b>c)
    cout<<"'b' has the greatest value"<<endl;
    if(c>a && c>b)
    cout<<"'c' has the greatest value"<<endl;

    //********************************* swich-case ***********************************
   
    i=a;
    switch (i)
    {
    case 1:
    cout<<"one";
    break;

    case 2:
    cout<<"two";
    break;

    case 3:
    cout<<"three";
    break;

    
    default: cout<<"invalid input datatype";
        break;
    }

    
    return 0;
}